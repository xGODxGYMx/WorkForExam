#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "[-]Программа \"Календарь\"" << endl;
	cout << endl;
	cout << "[1]Календарь" << endl;
	cout << "[2]Выход" << endl;
	int menu;
	int day;
	string month;
	cin >> menu;
	system("CLS");
	switch (menu)
	{
	case 1:
		cout << "[-]Название месяца" << endl;
		cout << endl;
		cout << "[1]Январь" << endl;
		cout << "[2]Февраль" << endl;
		cout << "[3]Март" << endl;
		cout << "[4]Апрель" << endl;
		cout << "[5]Май" << endl;
		cout << "[6]Июнь" << endl;
		cout << "[7]Июль" << endl;
		cout << "[8]Август" << endl;
		cout << "[9]Сентябрь" << endl;
		cout << "[10]Октябрь" << endl;
		cout << "[11]Ноябрь" << endl;
		cout << "[12]Декабрь" << endl;
		cout << endl;
		cout << "[-]Выберите номер месяца: ";
		cin >> menu;
		system("CLS");
		switch (menu)
		{
		case 1:
			month = "Января";
			cout << "[-]Выберие номер дня: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			case 31:
				day = 31;
			default:
				cout << "[-]Вы ввели не верное значение!";
				return 0;
			}
			break;
		case 2:
			month = "Февраля";
			cout << "[-]Выберие номер дня: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			default:
				cout << "[-]Вы ввели не верное значение!";
				return 0;
			}
			break;
		case 3:
			month = "Марта";
			cout << "[-]Выберие номер дня: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			case 31:
				day = 31;
			default:
				cout << "[-]Вы ввели не верное значение!";
				return 0;
			}
			break;
		case 4:
			month = "Апреля";
			cout << "[-]Выберие номер дня: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			default:
				cout << "[-]Вы ввели не верное значение!";
				return 0;
			}
			break;
		case 5:
			month = "Мая";
			cout << "[-]Выберие номер дня: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			case 31:
				day = 31;
			default:
				cout << "[-]Вы ввели не верное значение!";
				return 0;
			}
			break;
		case 6:
			month = "Июня";
			cout << "[-]Выберие номер дня: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			default:
				cout << "[-]Вы ввели не верное значение!";
				return 0;
			}
			break;
		case 7:
			month = "Июля";
			cout << "[-]Выберие номер дня: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			case 31:
				day = 31;
			default:
				cout << "[-]Вы ввели не верное значение!";
				return 0;
			}
			break;
		case 8:
			month = "Августа";
			cout << "[-]Выберие номер дня: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			case 31:
				day = 31;
			default:
				cout << "[-]Вы ввели не верное значение!";
				return 0;
			}
			break;
		case 9:
			month = "Сентября";
			cout << "[-]Выберие номер дня: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			default:
				cout << "[-]Вы ввели не верное значение!";
				return 0;
			}
			break;
		case 10:
			month = "Октября";
			cout << "[-]Выберие номер дня: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			case 31:
				day = 31;
			default:
				cout << "[-]Вы ввели не верное значение!";
				return 0;
			}
			break;
		case 11:
			month = "Ноября";
			cout << "[-]Выберие номер дня: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			default:
				cout << "[-]Вы ввели не верное значение!";
				return 0;
			}
			break;
		case 12:
			month = "Декабря";
			cout << "[-]Выберие номер дня: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			case 31:
				day = 31;
			default:
				cout << "[-]Вы ввели не верное значение!";
				return 0;
			}
			break;
		default:
			cout << "[-]Вы ввели не верное значение!";
			return 0;
		}
		cout << "[-]Календарь: " << day << " " << month;
		break;
	case 2:
		cout << "[-]Вы вышли из программы";
		return 0;
		break;
	default:
		cout << "[-]Вы ввели не верное значение!";
		return 0;
	}
	return 0;
}