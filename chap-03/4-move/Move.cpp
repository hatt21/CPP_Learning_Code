#include <iostream>
#include <memory>

std::unique_ptr<int> passtrough(std::unique_ptr<int> ptr)
{
    std::unique_ptr<int> local_variable = std::move(ptr);
    return local_variable;
}

void display(const std::string& variable_name, const std::unique_ptr<int>& variable)
{
    if (variable != nullptr)
    {
        std::cout << variable_name << " contains " << *variable << std::endl;
    }
    else
    {
        std::cout << variable_name << " is empty" << std::endl;
    }
}

int main()
{
    std::unique_ptr<int> i1 = std::make_unique<int>(3);
    std::unique_ptr<int> i2 = std::make_unique<int>(32);

    std::cout << "Before passthrough call" << std::endl;
    display("i1", i1);
    display("i2", i2);
    std::cout << "--------------------------" << std::endl;

    i2 = std::move(passtrough(std::move(i1)));

    std::cout << "After passthrough call" << std::endl;
    display("i1", i1);
    display("i2", i2);
    std::cout << "--------------------------" << std::endl;

    return 0;
}