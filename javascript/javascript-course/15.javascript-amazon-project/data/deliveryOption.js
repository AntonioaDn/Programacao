import dayjs from 'https://unpkg.com/dayjs@1.11.10/esm/index.js';

export const deliveryOptions = [
  {
    id: '1', 
    deliveryDays: 7,
    priceCents: 0
  },
  {
    id: '2',
    deliveryDays: 3,
    priceCents: 499
  },
  {
    id: '3',
    deliveryDays: 1,
    priceCents: 999
  }
];

export function getDeliveryOption(deliveryOptionId) {
  let matchingDeliveryOption;
  deliveryOptions.forEach( (deliveryOption) => {
    if (deliveryOption.id === deliveryOptionId) {
      matchingDeliveryOption = deliveryOption;
    }
  });
  return matchingDeliveryOption || deliveryOptions[0];
}

export function calculateDeliveryDate(deliveryOption) {
  const today = dayjs();
  const deliveryDate = today.add(deliveryOption.deliveryDays, 'day');
  return deliveryDate.format('dddd, MMMM D');
}