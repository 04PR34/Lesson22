#pragma once
#include "Event.h"
class Meeting :
	public Event
{
protected:
	string person;
	string place;
public:
	Meeting();
	Meeting(Date date,Time_ time,string person,string place);
	~Meeting();

	virtual void Show();
	virtual string toString();
	virtual string Type();
};

