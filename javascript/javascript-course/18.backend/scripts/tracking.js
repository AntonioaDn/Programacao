import { orders, getOrder } from '../data/orders.js';
import { getProduct, loadProductsFetch } from '../data/products.js';
import dayjs from 'https://unpkg.com/dayjs@1.11.10/esm/index.js';

async function loadPage() {
  await loadProductsFetch();

  const url = new URL(window.location.href);

  const productId = url.searchParams.get('productId');
  const orderId = url.searchParams.get('orderId');
  console.log(productId);
  // console.log(orderId);
  // console.log(getOrder(orders[0].id))

  function renderFirstPart() {
    let matchingItem = getProduct(productId);
    let matchingOrder = getOrder(orderId);
    // console.log(matchingOrder);
    let orderProduct;
    matchingOrder.products.forEach((product) => {
      if (product.productId === productId) {
        orderProduct = product;
      }
    });
    const dateString = dayjs(orderProduct.estimatedDeliveryTime).format('DDDD, MMMM D');
    return  `
      <a class="back-to-orders-link link-primary" href="orders.html">
        View all orders
      </a>

      <div class="delivery-date">
        Arriving on ${dateString}
      </div>

      <div class="product-info">
        ${matchingItem.name}
      </div>

      <div class="product-info">
        Quantity: ${orderProduct.quantity}
      </div>

      <img class="product-image" src="${matchingItem.image}">

    `
  }

  function renderSecondPart() {
    let matchingItem = getProduct(productId);
    let matchingOrder = getOrder(orderId);
    // console.log(matchingOrder);
    let orderProduct;
    matchingOrder.products.forEach((product) => {
      if (product.productId === productId) {
        orderProduct = product;
      }
    });
    const dateString = dayjs(orderProduct.estimatedDeliveryTime).format('DDDD, MMMM D');
    return `
      <div class="progress-labels-container">
        <div class="progress-label">
          Preparing
        </div>
        <div class="progress-label current-status">
          Shipped
        </div>
        <div class="progress-label">
          Delivered
        </div>
      </div>

      <div class="progress-bar-container">
        <div class="progress-bar"></div>
      </div>

    `
  }

  function renderTracking() {
    let htmlTracking = `
      <div class="order-tracking">
        ${renderFirstPart()}
        ${renderSecondPart()}
      </div>
    `
    document.querySelector('.main').innerHTML = htmlTracking;
  }

  renderTracking();
  // console.log(renderFirstPart());
  // document.querySelector('.main').innerHTML = renderFirstPart();
  
  // console.log(url.searchParams.get('productId'))
  // console.log(url.searchParams.get('orderId'))
}
loadPage();
console.log(orders);
// console.log(getOrder(orders[0].id))

`

`