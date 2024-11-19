class Car {
  brand;
  model;
  speed;

  constructor(brand, model) {
    this.brand = brand;
    this.model = model;
    this.speed = 0;
  }

  displayInfo() {
    console.log(`${this.brand} ${this.model}, Speed: ${this.speed} km/h`);
  }

  go() {
    if (this.speed + 5 > 200) {
      this.speed = 200;
    } else {
      this.speed += 5;
    }
  }

  brake() {
    if (this.speed - 5 < 0) {
      this.speed = 0;
    } else {
      this.speed -= 5;
    }
  }
}

const car1 = new Car('Toyota', 'Corolla');
const car2 = new Car('Tesla', 'Model 3');
console.log(car1);
console.log(car2);

car1.go();
car1.go();
car1.go();
car1.go();
car1.go();
car2.go();
car2.go();
car2.go();
car2.go();
car2.go();
car2.go();
car2.go();
car2.go();
car2.go();
car1.displayInfo();
car2.displayInfo();
car1.brake();
car1.brake();
car1.brake();
car1.brake();
car1.brake();
car1.brake();
car1.brake();
car1.displayInfo();
car2.displayInfo();