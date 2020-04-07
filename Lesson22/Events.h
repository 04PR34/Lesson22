#pragma once
#include <vector>
#include "Custom.h"
#include "Bday.h"
#include "Meeting.h"
#include <algorithm>
namespace myEvent
{
	class Events
	{
	private:
		vector<Event*>events;
	public:
		Events();
		~Events();
		void Show();
		void add(Event *obj);
	};
}

