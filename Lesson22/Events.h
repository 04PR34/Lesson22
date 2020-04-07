#pragma once
#include <list>
#include "Custom.h"
#include "Bday.h"
#include "Meeting.h"
#include <algorithm>
namespace myEvent
{
	class Events
	{
	private:
		list<Event*>events;
	public:
		Events();
		~Events();
		void Show();
		void add(Event *obj);
	};
}

