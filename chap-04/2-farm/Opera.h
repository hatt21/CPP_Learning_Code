#pragma once
#include "Dog.h"
#include "Cow.h"
#include "Chicken.h"
#include "Cat.h"
#include "Animal.h"

#include <iostream>
#include <memory>
#include <vector>

class Opera
{
public:
    Opera()
    {
        _animals.emplace_back(std::make_unique<Dog>());
        _animals.emplace_back(std::make_unique<Chicken>());
        _animals.emplace_back(std::make_unique<Cow>());
        _animals.emplace_back(std::make_unique<Cat>());
    }

    void sing() const
    {
        for (const auto &animal : _animals)
        {
            animal->sing('\n');
        }
    }

private:
    std::vector<std::unique_ptr<Animal>> _animals;
};