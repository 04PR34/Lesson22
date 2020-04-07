#include "Events.h"


namespace myEvent
{
	Events::Events()
	{
	}


	Events::~Events()
	{
	}

	void Events::Show()
	{
		for (list<Event*>::iterator i = events.begin(); i != events.end(); i++)
		{
			(*i)->Show();
			cout << "----------------------|" << endl;
		}
	}

	void Events::add(Event * obj)
	{
		events.push_back(obj);
		//sort(events.begin(), events.end(),cmp);
	}
}

