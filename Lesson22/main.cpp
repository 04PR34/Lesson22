#include <iostream>
using namespace std;
#include "Events.h"
using namespace myEvent;
int main()
{
	setlocale(0,"");
	myEvent::Events myEvents;
	Date d;
	Time_ t;
	string str, str2;
	int age;
	int menu,menu2;
	do
	{
		cout << " ________________________________________" << endl;
		cout << "|=---------------=MENU=-----------------=|" << endl;
		cout << "| 1 - Add                                |" << endl;
		cout << "| 2 - Show                               |" << endl;
		cout << "|________________________________________|" << endl;
		cout << ">>>"; cin >> menu;
		switch (menu)
		{
		case 1:
			do
			{
				cout << " ________________________________________" << endl;
				cout << "|=---------------=MENU=-----------------=|" << endl;
				cout << "| 1 - Meeting                            |" << endl;
				cout << "| 2 - Bday                               |" << endl;
				cout << "| 3 - Custom                             |" << endl;
				cout << "|________________________________________|" << endl;
				cout << ">>>"; cin >> menu2;
				switch (menu2)
				{
				case 1:
					cout << "Date: "; cin >> d;
					cout << "Time: "; cin >> t;
					cout << "Place: "; cin.get();
					getline(cin, str);  
					cout << "Person: "; getline(cin, str2);
					myEvents.add(new Meeting(d, t, str, str2));
					cout << "Successful!\n";
					break;
				case 2:
					cout << "Date: "; cin >> d;
					cout << "Time: "; cin >> t;
					cout << "Place: "; cin.get();
					getline(cin, str);
					cout << "Hero: "; getline(cin, str2);
					cout << "Age: "; cin >> age;
					myEvents.add(new Bday(d, t, str, str2,age));
					cout << "Successful!\n"; 
					break;
				case 3:
					cout << "Date: "; cin >> d;
					cout << "Time: "; cin >> t;
					cout << "Description: "; getline(cin, str); cin >> str;
					myEvents.add(new Custom(d, t, str));
					cout << "Successful!\n"; 
					break;
				}
			} while (menu2 != 0); break;
		case 2:
			myEvents.Show(); break;
		}
	} while (menu!=0);
	system("pause");
	return 0;
}