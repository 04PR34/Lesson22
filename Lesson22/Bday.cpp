#include "Bday.h"
namespace myEvent
{
	Bday::Bday()
	{
		hero = "none";
		place = "none";
		age = 0;
	}

	Bday::Bday(Date date, Time_ time, string hero, string place, int age) :Event(date, time)
	{
		this->hero = hero;
		this->place = place;
		this->age = age;
	}

	Bday::~Bday()
	{
	}

	void Bday::setHero(string hero)
	{
		this->hero = hero;
	}

	string Bday::getHero() const &
	{
		return hero;
	}

	void Bday::setPlace(string place)
	{
		this->place = place;
	}

	string Bday::getPlace() const &
	{
		return place;
	}

	void Bday::setAge(int age)
	{
		this->age = age;
	}

	int Bday::getAge() const &
	{
		return age;
	}

	void Bday::Show()
	{
		cout << "Date: " << date << endl;
		cout << "Time: " << time << endl;
		cout << "Hero: " << hero << endl;
		cout << "Place: " << place << endl;
		cout << "Age: " << age << endl;
		cout << "==============================================" << endl;
	}

	string Bday::toString()
	{
		return "{Date: " + to_string(date.getDay()) + "-" + to_string(date.getMonth()) + "-" +
			to_string(date.getYear()) + "; Time: " + to_string(time.getHour()) + ":" +
			to_string(time.getMinutes()) + "; Hero: " + hero + "; Place: " + place + "; Age: " +
			to_string(age) + ";}";
	}

	string Bday::Type()
	{
		return "Birthday";
	}
}