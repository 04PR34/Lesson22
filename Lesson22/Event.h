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
	~Event();
};

