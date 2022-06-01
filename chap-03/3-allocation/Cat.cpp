#include "Cat.h"

#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<Cat> cat = std::make_unique<Cat>("Felix");
    std::cout << *cat << std::endl;
    std::unique_ptr<Cat> cat2 = std::make_unique<Cat>("Garfield");
    std::cout << *cat << std::endl;

    std::cout << "cat1 == cat2 ? " << (cat == cat2) << std::endl;
    std::cout << "*cat1 == *cat2 ? " << (*cat == *cat2) << std::endl;

    cat.reset();
    if (cat == nullptr)
    {
        std::cout << "cat is nullptr." << std::endl;
    }

    return 0;
}