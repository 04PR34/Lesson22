#include "Custom.h"
namespace myEvent
{
	Custom::Custom()
	{
		description = "none";
	}

	Custom::Custom(Date date, Time_ time, string description) : Event(date, time)
	{
		this->description = description;
	}

	Custom::~Custom()
	{
	}

	void Custom::setDescription(string description)
	{
		this->description = description;
	}

	string Custom::getDescription() const &
	{
		return description;
	}

	void Custom::Show()
	{
		cout << "Date: " << date << endl;
		cout << "Time: " << time << endl;
		cout << "Description: " << description << endl;
		cout << "==============================================" << endl;
	}

	string Custom::toString()
	{
		return "{Date: " + to_string(date.getDay()) + "-" + to_string(date.getMonth()) + "-" +
			to_string(date.getYear()) + "; Time: " + to_string(time.getHour()) + ":" +
			to_string(time.getMinutes()) + "; Description: " + description + ";}";
	}

	string Custom::Type()
	{
		return "Custom";
	}
}
