#pragma once

#include "Event.h"
#include "Minutehand.h"
#include "Secondhand.h"

#include <ostream>
#include <vector>

class Clock
{
public:
    Clock(SecondHand& sec_hand, MinuteHand& min_hand)
        : _sec_hand { sec_hand }
        , _min_hand { min_hand }
    {}

    void tick()
    {
        _sec_hand.advance();

        auto curr_events = _events.begin();
        while (curr_events != _events.end())
        {
            if (curr_events->notify_time(_min_hand.get_minutes(), _sec_hand.get_seconds()))
            {
                curr_events = _events.erase(curr_events);
            }
            else
            {
                curr_events++;
            }
        }
    };

    void add_event(const Event& event) { _events.emplace_back(event); };

    friend std::ostream& operator<<(std::ostream& stream, const Clock& clock)
    {
        return stream << clock._min_hand.get_minutes() << " min " << clock._sec_hand.get_seconds() << " sec";
    }

private:
    SecondHand&        _sec_hand;
    MinuteHand&        _min_hand;
    std::vector<Event> _events;
};
