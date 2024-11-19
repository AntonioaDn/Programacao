class Car {
  brand;
  model;
  speed;
  isTrunkOpen;

  constructor(brand, model) {
    this.brand = brand;
    this.model = model;
    this.speed = 0;
    this.isTrunkOpen = false;
  }

  displayInfo() {
    console.log(
      `${this.brand} ${this.model}, Speed: ${this.speed} km/h, 
      Trunk: ${this.isTrunkOpen ? 'Open' : 'Closed'}`
    );
  }

  go() {
    if (!this.isTrunkOpen){
      if (this.speed + 5 > 200) {
      this.speed = 200;
      } else {
      this.speed += 5;
      }
    }
  }

  brake() {
    if (this.speed - 5 < 0) {
      this.speed = 0;
    } else {
      this.speed -= 5;
    }
  }

  openTrunk() {
    if (this.speed === 0) {
      this.isTrunkOpen = true;
    }
  }

  closeTrunk() {
    this.isTrunkOpen = false;
  }
}

const car1 = new Car('Toyota', 'Corolla');
const car2 = new Car('Tesla', 'Model 3');

car2.openTrunk();

car1.displayInfo();
car2.displayInfo();