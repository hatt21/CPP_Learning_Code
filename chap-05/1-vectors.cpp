#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    /*std::vector<int> vector(4, 0);
    for (const auto &num : vector)
    {
        std::cout << num << std::endl;
    }*/

    /*int array[] = {0, 1, 2, 3, 4, 5};

    std::vector<int> part(&array[2], &array[5]);

    std::vector<int> full(array, array + 6);

    int size = part.size();
    for (int i = 0; i < size / 2; i++)
    {
        std::swap(part[i], part[size - i - 1]);
    }
    for (const auto v : part)
    {
        std::cout << v << std::endl;
    }

    std::cout << std::endl;

    int size2 = full.size();
    for (int i = 0; i < size2 / 2; i++)
    {
        std::swap(full[i], full[size2 - i - 1]);
    }
    for (const auto v : full)
    {
        std::cout << v << std::endl;
    }*/

    int array[] = {0, 1, 2, 3, 4, 5};

    std::vector<int> full(array, array + 6);

    for (auto it = full.begin(); it != full.end(); it += 2)
    {
        it = full.insert(it, *it);
    }

    for (const auto v : full)
    {
        std::cout << v << std::endl;
    }

    std::cout << std::endl;

    /*full.erase(full.begin() + 2, full.begin() + 7);*/

    const auto it = std::find(full.begin(), full.end(), 5);
    if (it != full.end())
    {
        full.erase(it);
    }

    for (const auto v : full)
    {
        std::cout << v << std::endl;
    }

    std::cout << std::endl;

    full.clear();
    full.assign(5, 2);

    for (const auto v : full)
    {
        std::cout << v << std::endl;
    }

    full.assign({0, 2, 32, -4, 3});

    for (const auto v : full)
    {
        std::cout << v << std::endl;
    }

    full.clear();

    return 0;
}