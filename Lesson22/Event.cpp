#include "Event.h"
namespace myEvent
{
	Event::Event()
	{
		date = Date();
		time = Time_();
	}

	Event::Event(Date date, Time_ time)
	{
		this->date = date;
		this->time = time;
	}

	Event::~Event()
	{
	}

	void Event::setDate(Date date)
	{
		this->date = date;
	}

	Date Event::getDate() const &
	{
		return date;
	}

	void Event::setTime(Time_ time)
	{
		this->time = time;
	}

	Time_ Event::getTime() const &
	{
		return time;
	}

	bool Event::operator<(const Event & obj) const &
	{
		if (this->date < obj.date) return true;
		else if (this->date == obj.date &&this->time < obj.time) return true;
		else return false;
	}

	bool Event::operator>(const Event & obj) const &
	{
		if (this->date > obj.date) return true;
		else if (this->date == obj.date &&this->time > obj.time) return true;
		else return false;
	}

	bool Event::operator==(const Event & obj) const &
	{
		if (this->date == obj.date&&this->time == obj.time) return true;
		else return false;
	}

	bool Event::operator!=(const Event & obj) const &
	{
		if (this->date != obj.date || this->time != obj.time) return true;
		else return false;
	}

	bool Event::operator>=(const Event & obj) const &
	{
		if (this->date >= obj.date) return true;
		else if (this->date == obj.date &&this->time >= obj.time) return true;
		else return false;
	}

	bool Event::operator<=(const Event & obj) const &
	{
		if (this->date <= obj.date) return true;
		else if (this->date == obj.date &&this->time <= obj.time) return true;
		else return false;
	}
	bool cmp(const Event * obj, const Event * obj2)
	{
		return *obj < *obj2;
	}
}