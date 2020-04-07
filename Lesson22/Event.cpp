#include "Event.h"



Event::Event()
{
	date = Date();
	time = Time_();
}

Event::Event(Date d, Time_ t)
{
	date = d;
	time = t;
}


Event::~Event()
{
}

void Event::setDate(Date d)
{
	date = d;
}

Date Event::getDate() const &
{
	return date;
}

void Event::setTime(Time_ t)
{
	time = t;
}

Time_ Event::getTime() const &
{
	return time;
}
