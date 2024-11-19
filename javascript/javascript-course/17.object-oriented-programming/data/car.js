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

class RaceCar extends Car {
  acceleration;

  constructor (brand, model, acceleration) {
    super(brand, model);
    this.acceleration = acceleration;
  }

  go() {
    if (this.speed + this.acceleration > 300) {
      this.speed = 300;
    } else {
      this.speed += this.acceleration;
    }
  }

  openTrunk() {

  }

  closeTrunk() {

  }
}

const car1 = new Car('Toyota', 'Corolla');
const car2 = new Car('Tesla', 'Model 3');
const car3 = new RaceCar('McLaren', 'F1', 20);
car3.go();
car3.go();
car3.go();
car3.go();

car3.displayInfo();