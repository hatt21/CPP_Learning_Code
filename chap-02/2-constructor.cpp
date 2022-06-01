#include <iostream>
#include <string>

class Person
{
public:
    Person() {}

    Person(const std::string& name, const std::string& surname)
        : _name { name }
        , _surname { surname }
    {}
    const std::string get_full_name() const { return _name + " " + _surname; }
    unsigned int      get_age() const { return _age; }

    /*void set_name(const std::string& name) { _name = name; }*/
    void set_age(unsigned int age) { _age = age; }
    void wait(unsigned int years) { _age += years; };

private:
    const std::string _name;
    const std::string _surname;
    unsigned int      _age = 0u;
};

int main()
{
    Person p("Bruce", "Wayne");

    /*p.set_name("Batman");*/
    p.set_age(23);
    p.wait(3);

    std::cout << "Person named '" << p.get_full_name() << "' is " << p.get_age() << " years old."
              << std::endl;

    return 0;
}
