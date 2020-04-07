#include "Meeting.h"

Meeting::Meeting():Event()
{
	person = "Unknown";
	place = "Unknown";
}

Meeting::Meeting(Date date, Time_ time, string person, string place):Event(date,time)
{
	this->person = person;
	this->place = place;
}


Meeting::~Meeting()
{
}

void Meeting::Show()
{
	cout << "Date: " << date << endl;
	cout << "Time: " << time << endl;
	cout << "Person: " << person << endl;
	cout << "Place: " << place << endl;
	
}

string Meeting::toString()
{
	return "{ date:" + to_string(date.getDay()) + "-" + to_string(date.getMonth()) + "-" + to_string(date.getYear()) + "; time:" + to_string(time.getHour()) + ":" + to_string(time.getMinutes()) +
	"; person:" + person + "; place:" + place + "}";;
}

string Meeting::Type()
{
	return "meeting";
}
