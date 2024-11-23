import {cart, addToCart} from '../data/cart.js';
import {products, loadProductsFetch, filterByName} from '../data/products.js';
import {formatCurrency} from './utils/money.js';

const searchBar = document.querySelector('.search-bar');
const searchButton = document.querySelector('.search-button');

async function loadPage() {
  await loadProductsFetch();

  renderProductsGrid(new URL(window.location.href), products);

  searchButton.addEventListener('click', () => {
      const searchString = searchBar.value;
      // console.log(searchString);
      const filterProducts = products.filter((product) => {
        if (String(product.name).includes(searchString)) {
          return true
        }
        return false;
      });
      // console.log(filterProducts);
      // console.log(products);
      let url = new URL(`${window.location.href}?search=${searchString}`)
      // console.log(url)
      renderProductsGrid(url, filterProducts);
    });
    
}

function renderProductsGrid(url, products) {

  // console.log(url)
  
  let productsHTML = '';

  console.log(url);

  let params = url.searchParams.get('search');

  if (!params) {
    products.forEach((product) => {
      // console.log('produto adicionado ao html');
      productsHTML += `
        <div class="product-container">
          <div class="product-image-container">
            <img class="product-image"
              src="${product.image}">
          </div>
  
          <div class="product-name limit-text-to-2-lines">
            ${product.name}
          </div>
  
          <div class="product-rating-container">
            <img class="product-rating-stars"
              src="${product.getStarsUrl()}">
            <div class="product-rating-count link-primary">
              ${product.rating.count}
            </div>
          </div>
  
          <div class="product-price">
            ${product.getPrice()}
          </div>
  
          <div class="product-quantity-container">
            <select>
              <option selected value="1">1</option>
              <option value="2">2</option>
              <option value="3">3</option>
              <option value="4">4</option>
              <option value="5">5</option>
              <option value="6">6</option>
              <option value="7">7</option>
              <option value="8">8</option>
              <option value="9">9</option>
              <option value="10">10</option>
            </select>
          </div>
  
          ${product.extraInfoHTML()}
  
          <div class="product-spacer"></div>
  
          <div class="added-to-cart">
            <img src="images/icons/checkmark.png">
            Added
          </div>
  
          <button class="add-to-cart-button button-primary js-add-to-cart"
          data-product-id="${product.id}">
            Add to Cart
          </button>
        </div>
      `;
    });
  } else {
    const searchString = searchBar.value;
    // console.log(searchString);
    let filterProducts = products.filter((product) => {
      if (String(product.name).includes(searchString)) {
        return true
      }
      return false;
    });
    filterProducts.forEach((product) => {
      productsHTML += `
        <div class="product-container">
          <div class="product-image-container">
            <img class="product-image"
              src="${product.image}">
          </div>
  
          <div class="product-name limit-text-to-2-lines">
            ${product.name}
          </div>
  
          <div class="product-rating-container">
            <img class="product-rating-stars"
              src="${product.getStarsUrl()}">
            <div class="product-rating-count link-primary">
              ${product.rating.count}
            </div>
          </div>
  
          <div class="product-price">
            ${product.getPrice()}
          </div>
  
          <div class="product-quantity-container">
            <select>
              <option selected value="1">1</option>
              <option value="2">2</option>
              <option value="3">3</option>
              <option value="4">4</option>
              <option value="5">5</option>
              <option value="6">6</option>
              <option value="7">7</option>
              <option value="8">8</option>
              <option value="9">9</option>
              <option value="10">10</option>
            </select>
          </div>
  
          ${product.extraInfoHTML()}
  
          <div class="product-spacer"></div>
  
          <div class="added-to-cart">
            <img src="images/icons/checkmark.png">
            Added
          </div>
  
          <button class="add-to-cart-button button-primary js-add-to-cart"
          data-product-id="${product.id}">
            Add to Cart
          </button>
        </div>
      `
    });
    
  }
  
  
  document.querySelector('.js-products-grid').innerHTML = productsHTML;

  function updateCartQuantity() {
    let cartQuantity = 0;

    cart.forEach((cartItem) => {
      cartQuantity += cartItem.quantity;
    });

    document.querySelector('.js-cart-quantity')
      .innerHTML = cartQuantity;
  }

  document.querySelectorAll('.js-add-to-cart')
    .forEach((button) => {
      button.addEventListener('click', () => {
        const productId = button.dataset.productId;
        addToCart(productId);
        updateCartQuantity();
      });
    });

  updateCartQuantity();
}

loadPage();