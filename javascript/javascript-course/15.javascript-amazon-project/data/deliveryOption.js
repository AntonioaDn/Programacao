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
  let deliveryDate = dayjs();
  let remainingDays = deliveryOption.deliveryDays;
  while(remainingDays > 0) {
    deliveryDate = deliveryDate.add(1, 'day');
    if (!isWeekend(deliveryDate)) {
      remainingDays--;
    }
  }

  return deliveryDate.format('dddd, MMMM D');
}

function isWeekend(day) {
  const nameOfDay = day.format('dddd');
  return nameOfDay === 'Saturday' || nameOfDay === 'Sunday';
}