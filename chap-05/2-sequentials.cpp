#include <list>
#include <array>
#include <string>
#include <iostream>
#include <vector>
#include <stack>

enum Fruit
{
    Apricot,
    Cherry,
    Mango,
    Raspberry,

    Fruit_Count,
};

void try_arrays()
{
    // Implement array tests here.
    std::array<std::string, Fruit_Count> fruit_names;
    fruit_names[Apricot] = "apricot";
    fruit_names[Cherry] = "cherry";
    fruit_names[Mango] = "mango";
    fruit_names[Raspberry] = "raspberry";
}
std::ostream &operator<<(std::ostream &ostr, const std::list<int> &list)
{
    for (auto &i : list)
    {
        ostr << " " << i;
    }
    return ostr;
}

void try_lists()
{
    std::list<int> l1{1, 2, 3};
    std::list<int> l2{4, 5, 6};
    std::list<int> l3{7, 8, 9};
    std::list<int> l4{10, 11, 12};
    l1.merge(l2);
    std::cout << l1 << std::endl;
    std::cout << std::endl;
    l3.merge(l4);
    std::cout << l3 << std::endl;
    std::cout << std::endl;
    auto mid = l1.begin();
    std::advance(mid, l1.size() / 2);
    l1.splice(mid, l3);
    std::cout << l1 << std::endl;
    std::cout << std::endl;
}

void try_stacks()
{
    // Implement stack tests here.
    /*std::vector<int> v{0, 1, 2};
    std::stack<int, std::vector<int>> s2{v};*/

    std::stack<int, std::vector<int>> s2;
    s2.emplace(0);
    s2.emplace(1);
    s2.emplace(2);
}

int main()
{
    try_arrays();
    try_lists();
    try_stacks();

    return 0;
}