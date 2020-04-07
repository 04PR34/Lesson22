#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Date.h"
#include "Time_.h"
class Event
{
protected:
	Date date;
	Time_ time;
public:
	Event();
	Event(Date d,Time_ t);
	~Event();

	void setDate(Date d);
	Date getDate()const&;

	void setTime(Time_ t);
	Time_ getTime()const&;

	virtual void Show()=0;
	virtual void toString() = 0;
	virtual string Type() = 0;

};

