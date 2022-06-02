#pragma once

#include "Phone.h"

class HomePhone : public Phone
{
public:
    HomePhone(const Person &user, int position) : Phone(user), _position{position} {}

    void ring() const override
    {
        if (_position != _owner.get_position())
        {
            _owner.dont_answer_phone();
        }
        else
        {
            _owner.answer_phone();
        }
    }

private:
    int _position = 0;
};