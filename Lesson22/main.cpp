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
		cout << "| 1 - Добавить событие                   |" << endl;
		cout << "| 2 - Вывести все события                |" << endl;
		cout << "|________________________________________|" << endl;
		cout << ">>>"; cin >> menu;
		switch (menu)
		{
		case 1:
			do
			{
				cout << " ________________________________________" << endl;
				cout << "|=---------------=MENU=-----------------=|" << endl;
				cout << "| 1 - Встреча                            |" << endl;
				cout << "| 2 - День Рождения                      |" << endl;
				cout << "| 3 - Событие                            |" << endl;
				cout << "|________________________________________|" << endl;
				cout << ">>>"; cin >> menu2;
				switch (menu2)
				{
				case 1:
					cout << "Введите дату: "; cin >> d;
					cout << "Введите время: "; cin >> t;
					cout << "Введите место: "; cin.get();
					getline(cin, str);  
					cout << "Введите с кем встреча: "; getline(cin, str2);
					myEvents.add(new Meeting(d, t, str, str2)); break;
				case 2:
					cout << "Введите дату: "; cin >> d;
					cout << "Введите время: "; cin >> t;
					cout << "Введите имениника: "; cin.get();
					getline(cin, str);
					cout << "Введите место: "; getline(cin, str2);
					cout << "Введите возраст: "; cin >> age;
					myEvents.add(new Bday(d, t, str, str2,age)); break;
				case 3:
					cout << "Введите дату: "; cin >> d;
					cout << "Введите время: "; cin >> t;
					cout << "Введите описание: "; getline(cin, str); cin >> str;
					myEvents.add(new Custom(d, t, str)); break;
				}
			} while (menu2 != 0); break;
		case 2:
			myEvents.Show(); break;
		}
	} while (menu!=0);
	system("pause");
	return 0;
}