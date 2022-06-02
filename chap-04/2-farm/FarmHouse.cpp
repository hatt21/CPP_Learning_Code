#include "Animal.h"
#include "Cat.h"
#include "Chicken.h"
#include "Cow.h"
#include "Dog.h"
#include "Opera.h"

#include <vector>
#include <memory>

void sing_a_lot(const Animal &animal, unsigned int times)
{
    while (times-- > 0)
    {
        animal.sing(' ');
    }
    animal.sing('\n');
}

void sing_chorus(std::vector<std::unique_ptr<Animal>> &animals)
{
    for (const auto &animal : animals)
    {
        animal->sing('\n');
    }
}

int main()
{
    Cat cat;
    Chicken chicken;
    Dog dog;
    Cow cow;

    sing_a_lot(cat, 2u);
    sing_a_lot(dog, 1u);
    sing_a_lot(cow, 3u);
    sing_a_lot(dog, 1u);
    sing_a_lot(chicken, 2u);
    std::cout << std::endl;

    std::vector<std::unique_ptr<Animal>> animals;
    animals.emplace_back(std::make_unique<Dog>());
    animals.emplace_back(std::make_unique<Cat>());
    sing_chorus(animals);
    std::cout << std::endl;

    Opera opera;
    opera.sing();
    return 0;
}
