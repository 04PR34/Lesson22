#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include "Time_.h"
using namespace std;
namespace myEvent
{

	class Event
	{
	protected:
		Date date;
		Time_ time;

	public:
		Event();
		Event(Date date, Time_ time);
		~Event();

		void setDate(Date date);
		Date getDate()const&;

		void setTime(Time_ time);
		Time_ getTime()const&;

		virtual void Show() = 0;
		virtual string toString() = 0;
		virtual string Type() = 0;

		bool operator <(const Event& obj)const&;
		bool operator >(const Event& obj)const&;
		bool operator ==(const Event& obj)const&;
		bool operator !=(const Event& obj)const&;
		bool operator >=(const Event& obj)const&;
		bool operator <=(const Event& obj)const&;


	};

	bool cmp(const Event* obj,const Event* obj2);
}

