import { cart, addToCart } from '../data/cart.js';
import { formatCurrency } from '../scripts/utils/money.js';
import { orders } from '../data/orders.js'
import { getProduct, loadProducts, loadProductsFetch, products } from '../data/products.js';
import dayjs from 'https://unpkg.com/dayjs@1.11.10/esm/index.js';

async function loadPage() {
  await loadProductsFetch();
  function renderHeader(order) {
    if (order.errorMessage) {
      return '';
    }
    const orderId = order.id;
    const dateString = dayjs(order.orderTime).format('MMMM D');
    const totalValue = formatCurrency(order.totalCostCents);
    let htmlHeader =  `
    <div class="order-header">
      <div class="order-header-left-section">
        <div class="order-date">
          <div class="order-header-label">Order Placed:</div>
          <div>${dateString}</div>
        </div>
        <div class="order-total">
          <div class="order-header-label">Total:</div>
          <div>${totalValue}</div>
        </div>
      </div>
  
      <div class="order-header-right-section">
        <div class="order-header-label">Order ID:</div>
        <div>${orderId}</div>
      </div>
    </div>
    `
    return htmlHeader;
  }
  function renderProductsDetails(order) {
    if (order.errorMessage) {
      return '';
    }
    
    let htmlProductsOrder = '';
  
    order.products.forEach((productDetails) => {
      const matchingItem = getProduct(productDetails.productId);
      const deliveryDate = dayjs(productDetails.estimatedDeliveryTime);
      const dateString = dayjs(deliveryDate).format('MMMM D');
      // const dateString = dayjs(order.orderTime).format('MMMM D');
      
      htmlProductsOrder +=  `
      <div class="product-image-container">
        <img src="${matchingItem.image}">
      </div>
  
      <div class="product-details">
        <div class="product-name">
          ${matchingItem.name}
        </div>
        <div class="product-delivery-date">
          Arriving on: ${dateString}
        </div>
        <div class="product-quantity">
          Quantity: ${productDetails.quantity}
        </div>
        <button class="buy-again-button button-primary js-buy-again"
        data-product-id="${matchingItem.id}">
          <img class="buy-again-icon" src="images/icons/buy-again.png">
          <span class="buy-again-message">Buy it again</span>
        </button>
      </div>
  
      <div class="product-actions">
        <a href="tracking.html?productId=${matchingItem.id}&orderId=${order.id}">
          <button class="track-package-button button-secondary js-track"
          data-product-id="${matchingItem.id}" data-order-id="${order.id}">
            Track package
          </button>
        </a>
      </div>
      `
    });
  
    return `<div class="order-details-grid">${htmlProductsOrder}</div>`;
    
  }
  function renderOrders(order) {
    let html = '';
    return `
    <div class="order-container">
      ${renderHeader(order)}
      ${renderProductsDetails(order)}
    </div>`
  } 
  function updateCartQuantity() {
    // console.log('Cart atualizado')
    let cartQuantity = 0;
  
    cart.forEach((cartItem) => {
      cartQuantity += cartItem.quantity;
    });
  
    document.querySelector('.js-cart-quantity')
      .innerHTML = cartQuantity;
  }

  let htmlOrders = '';
  orders.forEach((order) => {
    htmlOrders += renderOrders(order);
  })

  document.querySelector('.main')
    .innerHTML = `
      <div class="page-title">Your Orders</div>
      <div class="orders-grid js-orders-grid">
        ${htmlOrders}
      </div>
    `
  updateCartQuantity();

  document.querySelectorAll('.js-buy-again')
    .forEach((button) => {
      button.addEventListener('click', () => {
        const { productId } = button.dataset;
        addToCart(productId);
        button.innerHTML = 'Added!';
        setTimeout(() => {
          button.innerHTML = `
            <img class="buy-again-icon" src="images/icons/buy-again.png">
            <span class="buy-again-message">Buy it again</span>
          `
        }, 1500);
        updateCartQuantity();
      });
    });

  document.querySelectorAll('.js-track')
    .forEach((buttonTrack) => {
      buttonTrack.addEventListener('click', () => {
        console.log(buttonTrack.dataset);
        const { productId, orderId } = buttonTrack.dataset;
      });
    });

  document.querySelector('.js-search-button')
    .addEventListener('click', () => {
      const search = document.querySelector('.js-search-bar').value;
      window.location.href = `amazon.html?search=${search}`;
    }); 

  document.querySelector('.js-search-bar')
    .addEventListener('keydown', (event) => {
      if (event.key === 'Enter') {
        const search = document.querySelector('.js-search-bar').value;
        window.location.href = `amazon.html?search=${search}`;
      }
    }); 

}
loadPage();

console.log(orders);