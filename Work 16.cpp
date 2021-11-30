#include <iostream>
using namespace std;

void ClearConsole() {
	system("CLS");
}

void ChangeColorBackground() {
	system("color A0");
	cout << "[-]Цвет фона изменен" << endl;
}

void ChangeColorText() {
	system("color 0A");
	cout << "[-]Цвет текста изменен" << endl;
}

void GetSizeInt() {
	cout << "[-]" << sizeof(int) << " байта" << endl;
}

void GetSizeChar() {
	cout << "[-]" << sizeof(char) << " байт" << endl;
}

void GetSizeDouble() {
	cout << "[-]" << sizeof(double) << " байт" << endl;
}

void GetSizeFloat() {
	cout << "[-]" << sizeof(float) << " байта" << endl;
}

void GetSizeBool() {
	cout << "[-]" << sizeof(bool) << " байт" << endl;
}

void ShowMessage() {
	cout << "[-]Привет я функция" << endl;
}

void ShowSquare() {
	cout << "[-]Результат:" << endl;
	cout << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << " # ";
		}
		cout << endl;
	}
}

int main() {
	while (true) {
		setlocale(0, "");
		cout << "[-]Программа \"Функции\"" << endl;
		cout << endl;
		cout << "[1]Очищение консоли" << endl;;
		cout << "[2]Изменение цвета фона консоли" << endl;
		cout << "[3]Изменение цвета текста консоли" << endl;
		cout << "[4]Вывод размера типа данных INT" << endl;
		cout << "[5]Вывод размера типа данных CHAR" << endl;
		cout << "[6]Вывод размера типа данных DOUBLE" << endl;
		cout << "[7]Вывод размера типа данных FLOAT" << endl;
		cout << "[8]Вывод размера типа данных BOOL" << endl;
		cout << "[9]Вывод сообщения “Привет я функция" << endl;
		cout << "[10]Вывод квадрата 5x5" << endl;
		cout << endl;
		cout << "[-]Выберите значение: ";
		int menu;
		cin >> menu;
		switch (menu) {
		case 1:
			ClearConsole();
			break;
		case 2:
			cout << endl;
			ChangeColorBackground();
			cout << endl;
			break;
		case 3:
			cout << endl;
			ChangeColorText();
			cout << endl;
			break;
		case 4:
			cout << endl;
			GetSizeInt();
			cout << endl;
			break;
		case 5:
			cout << endl;
			GetSizeChar();
			cout << endl;
			break;
		case 6:
			cout << endl;
			GetSizeDouble();
			cout << endl;
			break;
		case 7:
			cout << endl;
			GetSizeFloat();
			cout << endl;
			break;
		case 8:
			cout << endl;
			GetSizeBool();
			cout << endl;
			break;
		case 9:
			cout << endl;
			ShowMessage();
			cout << endl;
			break;
		case 10:
			cout << endl;
			ShowSquare();
			cout << endl;
			break;
		default:
			cout << "[-]Вы ввели не верное значение";
			cout << endl;
			break;
		}
	}
	return 0;
}