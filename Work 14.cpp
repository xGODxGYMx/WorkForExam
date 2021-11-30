#include <iostream>
#define Clear system("CLS");
using namespace std;
int main() {
	int start;
	do {
		setlocale(0, "");
		cout << "[-]Программа \"Массивы\"" << endl;
		cout << endl;
		cout << "[1]Int" << endl;
		cout << "[2]Short" << endl;
		cout << "[3]Long" << endl;
		cout << "[4]Float" << endl;
		cout << "[5]Double" << endl;
		cout << "[6]Char" << endl;
		cout << "[7]Bool" << endl;
		cout << "[8]String" << endl;
		cout << "[0]Выход" << endl;
		cout << endl;
		cout << "[-]Выберите массив: ";
		int menu;
		const int size = 10;
		int num1[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		short num2[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		long num3[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		float num4[size] = { 1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1, 8.1, 9.1, 10.1 };
		double num5[size] = { 1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1, 8.1, 9.1, 10.1 };
		char num6[size] = { '!', '@', '#', '$', '%', '^', '&', '*', '(', ')' };
		bool num7[size] = { true, false, true, false, true, false, true, false, true, false };
		string num8[size] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j" };
		cin >> menu;
		Clear;
		switch (menu) {
		case 1:
			cout << "[-]Массив Int";
			cout << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << "[" << i + 1 << "] int: " << num1[i] << endl;
			}
			break;
		case 2:
			cout << "[-]Массив Short";
			cout << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << "[" << i + 1 << "] short: " << num2[i] << endl;
			}
			break;
		case 3:
			cout << "[-]Массив Long";
			cout << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << "[" << i + 1 << "] long: " << num3[i] << endl;
			}
			break;
		case 4:
			cout << "[-]Массив Float";
			cout << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << "[" << i + 1 << "] float: " << num4[i] << endl;
			}
			break;
		case 5:
			cout << "[-]Массив Double";
			cout << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << "[" << i + 1 << "] double: " << num5[i] << endl;
			}
			break;
		case 6:
			cout << "[-]Массив Char";
			cout << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << "[" << i + 1 << "] char: " << num6[i] << endl;
			}
			break;
		case 7:
			cout << "[-]Массив Bool";
			cout << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << "[" << i + 1 << "] bool: " << num7[i] << endl;
			}
			break;
		case 8:
			cout << "[-]Массив String";
			cout << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << "[" << i + 1 << "] string: " << num8[i] << endl;
			}
			break;
		case 0:
			cout << "[-]Вы вышли из программы" << endl;
			return 0;
			break;
		default:
			cout << "[-]Вы ввели не верное значение";
			cout << endl;
			break;
		}
		cout << endl;
		cout << "[-]Чтобы вернуться в меню нажмите 1 или любую другую, чтобы выйти из программы: ";
		cin >> start;
		Clear;
	} while (start == 1);
	cout << "[-]Вы вышли из программы" << endl;
	return 0;
}