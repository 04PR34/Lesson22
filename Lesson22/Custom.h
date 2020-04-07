#pragma once
#include "Event.h"
namespace myEvent
{
	class Custom : public Event
	{
	protected:
		string description;

	public:
		Custom();
		Custom(Date date, Time_ time, string description);
		~Custom();

		void setDescription(string description);
		string getDescription()const&;

		virtual void Show();
		virtual string toString();
		virtual string Type();
	};
}
