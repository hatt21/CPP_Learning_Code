#pragma once

class Trainer;

#include <iostream>
#include <memory>

// A creature that is cute and can fight other ones.
class Pokemon
{
public:
    Pokemon(const std::string& name)
        : _name { name }
    {}
    const std::string& name() const { return _name; }
    void               set_trainer(Trainer* trainer) { _trainer = trainer; }
    Trainer*           trainer() const { return _trainer; }

    const std::string _name;
    Trainer*          _trainer {};
};
