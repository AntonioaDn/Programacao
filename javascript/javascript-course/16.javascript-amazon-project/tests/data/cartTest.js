import { addToCart, cart, loadFromStorage } from '../../data/cart.js';

describe('Adds a product to cart', () => {
  it('adds an existing product', () => {
    
  });

  it('adds a new product', () => {
    spyOn(localStorage, 'getItem').and.callFake(() => {
      return JSON.stringify([]);
    });
    console.log(localStorage.getItem('oi'));
    
    addToCart('e43638ce-6aa0-4b85-b27f-e1d07eb678c6');
    expect(cart.length).toEqual(1); 
  });
});