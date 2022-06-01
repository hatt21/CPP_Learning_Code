#pragma once
#include "Minutehand.h"

class SecondHand
{
public:
    SecondHand(MinuteHand& min_hand)
        : _min_hand { min_hand }
    {}

    void advance()
    {
        if (_seconds == 59)
        {
            _seconds = 0;
            _min_hand.advance();
        }
        else
        {
            _seconds++;
        }
    }
    unsigned int get_seconds() const { return _seconds; };

private:
    int         _seconds = 0;
    MinuteHand& _min_hand;
};