import { orders, getOrder } from '../data/orders.js';
import { getProduct, loadProductsFetch } from '../data/products.js';
import dayjs from 'https://unpkg.com/dayjs@1.11.10/esm/index.js';

async function loadPage() {
  await loadProductsFetch();

  const url = new URL(window.location.href);

  const productId = url.searchParams.get('productId');
  const orderId = url.searchParams.get('orderId');
  // console.log(productId);
  // console.log(orderId);
  // console.log(getOrder(orders[0].id))

  function calculatePercentProgress(orderProduct, matchingOrder) {
    const estimatedDelivery = dayjs(orderProduct.estimatedDeliveryTime);
    const orderTime = dayjs(matchingOrder.orderTime);
    const today = dayjs();
    const totalTime = estimatedDelivery.diff(orderTime, 'day', true);
    const remainingDays = estimatedDelivery.diff(today, 'day', true);
    // const remainingDays = -2;
    // console.log(remainingDays);
    // console.log(totalTime);
    const percentProgress = (totalTime - remainingDays) / totalTime ;
    // console.log(percentProgress);
    return percentProgress;
  }
  
  function updateStatus(percentProgress) {
    let currentStatus;
    if (percentProgress > 0.00 && percentProgress < 0.49) {
      currentStatus = 'Preparing';
      document.querySelector('.js-preparing').classList.add('current-status')
    } else if (percentProgress >= 0.49 && percentProgress < 1) {
      currentStatus = 'Shipping';
      document.querySelector('.js-shipped').classList.add('current-status')
    } else {
      currentStatus = 'Delivered';
      document.querySelector('.js-delivered').classList.add('current-status')
    }
  }
  
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
    const dateString = dayjs(orderProduct.estimatedDeliveryTime).format('dddd, MMMM D');
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
    let orderProduct;
    matchingOrder.products.forEach((product) => {
      if (product.productId === productId) {
        orderProduct = product;
      }
    });
    const percentProgress = calculatePercentProgress(orderProduct, matchingOrder);
    return `
      <div class="progress-labels-container">
        <div class="progress-label js-preparing">
          Preparing
        </div>
        <div class="progress-label js-shipped">
          Shipped
        </div>
        <div class="progress-label js-delivered">
          Delivered
        </div>
      </div>

      <div class="progress-bar-container">
        <div class="progress-bar" style="width: ${percentProgress * 100}%";></div>
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
    let orderProduct;
    const matchingOrder = getOrder(orderId);
    matchingOrder.products.forEach((product) => {
      if (product.productId === productId) {
        orderProduct = product;
      }
    });
    const percentProgress = calculatePercentProgress(
      orderProduct,
      matchingOrder
    )
    updateStatus(percentProgress);
    
  }

  renderTracking();
  // console.log(renderFirstPart());
  // document.querySelector('.main').innerHTML = renderFirstPart();
  
  // console.log(url.searchParams.get('productId'))
  // console.log(url.searchParams.get('orderId'))
}
loadPage();
// console.log(orders);
// console.log(getOrder(orders[0].id))