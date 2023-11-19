#include <iostream>
#include <string>
using namespace std;
class License {
private:
    string number;

public:
    License(const std::string& licenseNumber) : number(licenseNumber) {}

    string getNumber() const {
        return number;
    }
};

class Registration {
private:
    string plateNumber;

public:
    Registration(const std::string& plate) : plateNumber(plate) {}

    string getPlateNumber() const {
        return plateNumber;
    }
};

class Car {
private:
    License license;
    Registration registration;

public:
    Car(const License& carLicense, const Registration& carRegistration)
        : license(carLicense), registration(carRegistration) {}

    const License& getLicense() const {
        return license;
    }

    const Registration& getRegistration() const {
        return registration;
    }
};

class PoliceCheck {
public:
    static void checkCar(const Car& car) {
        cout << "Checking car with license number: " << car.getLicense().getNumber() << endl;
        cout << "Checking car with plate number: " << car.getRegistration().getPlateNumber() << endl;
        // Additional checks and actions can be added here
    }
};

int main() {
    // Create a car with license and registration
    License carLicense("DJ31AXI");
    Registration carRegistration("DJ01BOS");
    Car myCar(carLicense, carRegistration);

    // Perform a police check on the car
    PoliceCheck::checkCar(myCar);

    return 0;
}
