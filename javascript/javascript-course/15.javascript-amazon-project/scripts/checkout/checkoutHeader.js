import { cart } from '../../data/cart.js';

export function renderCheckoutHeader() {
  let checkoutHeaderHTML = '';
  let quantity = 0;
  cart.forEach( (cartItem) => {
    quantity += cartItem.quantity;
  });

  checkoutHeaderHTML += `
    <div class="checkout-header-left-section">
      <a href="amazon.html">
        <img class="amazon-logo" src="images/amazon-logo.png">
        <img class="amazon-mobile-logo" src="images/amazon-mobile-logo.png">
      </a>
    </div>

    <div class="checkout-header-middle-section">
      Checkout (<a class="return-to-home-link"
        href="amazon.html">${quantity} items</a>)
    </div>

    <div class="checkout-header-right-section">
      <img src="images/icons/checkout-lock-icon.png">
    </div>
  `;

  document.querySelector('.header-content')
    .innerHTML = checkoutHeaderHTML;
}