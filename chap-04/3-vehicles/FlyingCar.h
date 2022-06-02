#pragma once

#include "Car.h"

class FlyingCar : public Car
{
    unsigned int drive() const override
    {
        if (_driver.has_car_licence())
        {
            std::cout << "Sweeesh!" << std::endl;
            return 10 * _speed;
        }

        Car::drive();
    }
};