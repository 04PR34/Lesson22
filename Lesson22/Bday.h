#pragma once
#include "Event.h"
namespace myEvent
{
	class Bday : public Event
	{
	protected:
		string hero;
		string place;
		int age;

	public:
		Bday();
		Bday(Date date, Time_ time, string hero, string place, int age);
		~Bday();

		void setHero(string hero);
		string getHero()const&;

		void setPlace(string place);
		string getPlace()const&;

		void setAge(int age);
		int getAge()const&;

		virtual void Show();
		virtual string toString();
		virtual string Type();
	};
}

