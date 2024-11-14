import { cart, removeFromCart, calculateCartQuantity } from '../data/cart.js';
import { products } from '../data/products.js';
import { formatCurrency } from './utils/money.js';

let cartSummaryHTML = '';

  cart.forEach( (cartItem) => {
    const productId = cartItem.productId;

    let matchingProduct;

    products.forEach( (product) => {
      if (product.id === productId) {
        matchingProduct = product;
      }
    });
    
    cartSummaryHTML += `
      <div class="cart-item-container js-cart-item-container-${matchingProduct.id}">
        <div class="delivery-date">
          Delivery date: Tuesday, June 21
        </div>

        <div class="cart-item-details-grid">
          <img class="product-image"
            src="${matchingProduct.image}">

          <div class="cart-item-details">
            <div class="product-name">
              ${matchingProduct.name}
            </div>
            <div class="product-price">
              $${formatCurrency(matchingProduct.priceCents)}
            </div>
            <div class="product-quantity">
              <span>
                Quantity: <span class="quantity-label">${cartItem.quantity}</span>
              </span>
              <span class="update-quantity-link link-primary js-update-quantity-link" data-product-id="${matchingProduct.id}">
                Update
                <input class="quantity-input">
                <span class="save-quantity-link">Save</span>
              </span>
              <span class="delete-quantity-link link-primary js-quantity-link" data-product-id="${matchingProduct.id}">
                Delete
              </span>
            </div>
          </div>

          <div class="delivery-options">
            <div class="delivery-options-title">
              Choose a delivery option:
            </div>
            <div class="delivery-option">
              <input type="radio" checked
                class="delivery-option-input"
                name="delivery-option-${matchingProduct.id}">
              <div>
                <div class="delivery-option-date">
                  Tuesday, June 21
                </div>
                <div class="delivery-option-price">
                  FREE Shipping
                </div>
              </div>
            </div>
            <div class="delivery-option">
              <input type="radio"
                class="delivery-option-input"
                name="delivery-option-${matchingProduct.id}">
              <div>
                <div class="delivery-option-date">
                  Wednesday, June 15
                </div>
                <div class="delivery-option-price">
                  $4.99 - Shipping
                </div>
              </div>
            </div>
            <div class="delivery-option">
              <input type="radio"
                class="delivery-option-input"
                name="delivery-option-${matchingProduct.id}">
              <div>
                <div class="delivery-option-date">
                  Monday, June 13
                </div>
                <div class="delivery-option-price">
                  $9.99 - Shipping
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
    `
  });

updateCheckout();
function updateCheckout() {
  let quantity = calculateCartQuantity();

  document.querySelector('.js-return-to-home-link')
    .innerHTML = `${calculateCartQuantity()} items`

}
  
document.querySelector('.js-order-summary')
  .innerHTML = cartSummaryHTML;
  

document.querySelectorAll('.js-quantity-link')
  .forEach( (link) => {
    link.addEventListener('click', () => {
      const { productId } = link.dataset;
      removeFromCart(productId);

      const container = document.querySelector(
        `.js-cart-item-container-${productId}`
      ).remove();

      updateCheckout();
    });
  });

document.querySelectorAll('.js-update-quantity-link')
  .forEach( (link) => {
    link.addEventListener('click', () => {
      const { productId } = link.dataset;
      const cartItemContainer = document.querySelector(`.js-cart-item-container-${productId}`);
      cartItemContainer.classList.add('is-editing-quantity');
      
    })
  });