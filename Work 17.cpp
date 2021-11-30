#include <iostream>
#define Clear system("CLS");

using namespace std;

int main();

int menu;
double a, b;
int c, d;

void Addition() {

	cout << "[-]Сложение" << endl;
	cout << endl;
	cout << "[1]Введите первое число: ";
	cin >> a;

	cout << endl;
	cout << "[2]Введите второе число: ";
	cin >> b;

	cout << endl;
	cout << "[-]Результат: " << a << " + " << b << " = " << a + b << endl;
	cout << endl;
	cout << "[-]Чтобы вернуться в меню нажмите 1 или любую другую, чтобы выйти из программы: ";
    cin >> menu;

	if (menu == 1) {
		Clear;
		main();
	}

}

void Subtraction() {

	cout << "[-]Вычитание" << endl;
	cout << endl;
	cout << "[1]Введите первое число: ";
	cin >> a;

	cout << endl;
	cout << "[2]Введите второе число: ";
	cin >> b;

	cout << endl;
	cout << "[-]Результат: " << a << " - " << b << " = " << a - b << endl;
	cout << endl;
	cout << "[-]Чтобы вернуться в меню нажмите 1 или любую другую, чтобы выйти из программы: ";
	cin >> menu;

	if (menu == 1) {
		Clear;
		main();
	}

}

void Multiplication() {

	cout << "[-]Умножение" << endl;
	cout << endl;
	cout << "[1]Введите первое число: ";
	cin >> a;

	cout << endl;
	cout << "[2]Введите второе число: ";
	cin >> b;

	cout << endl;
	cout << "[-]Результат: " << a << " * " << b << " = " << a * b << endl;
	cout << endl;
	cout << "[-]Чтобы вернуться в меню нажмите 1 или любую другую, чтобы выйти из программы: ";
	cin >> menu;

	if (menu == 1) {
		Clear;
		main();
	}

}

void Division() {

	cout << "[-]Деление" << endl;
	cout << endl;
	cout << "[1]Введите первое число: ";
	cin >> a;

	if (a == 0) {
		cout << endl;
		cout << "[-]Ошибка!" << endl;
		cout << endl;
		cout << "[-]Чтобы вернуться в меню нажмите 1 или любую другую, чтобы выйти из программы: ";
		cin >> menu;

		if (menu == 1) {
			Clear;
			main();
		}
	}
	else {
		cout << endl;
		cout << "[2]Введите второе число: ";
		cin >> b;

		if (b == 0) {
			cout << endl;
			cout << "[-]Ошибка!" << endl;
			cout << endl;
			cout << "[-]Чтобы вернуться в меню нажмите 1 или любую другую, чтобы выйти из программы: ";
			cin >> menu;

			if (menu == 1) {
				Clear;
				main();
			}
		}
		else {
			cout << endl;
			cout << "[-]Результат: " << a << " / " << b << " = " << a / b << endl;
			cout << endl;
			cout << "[-]Чтобы вернуться в меню нажмите 1 или любую другую, чтобы выйти из программы: ";
			cin >> menu;

			if (menu == 1) {
				Clear;
				main();
			}
		}
	}

}

void DivisionWithRemainder() {

	cout << "[-]Деление с остатком" << endl;
	cout << endl;
	cout << "[1]Введите первое число: ";
	cin >> c;

	if (c == 0) {
		cout << endl;
		cout << "[-]Ошибка!" << endl;
		cout << endl;
		cout << "[-]Чтобы вернуться в меню нажмите 1 или любую другую, чтобы выйти из программы: ";
		cin >> menu;

		if (menu == 1) {
			Clear;
			main();
		}
	}
	else {
		cout << endl;
		cout << "[2]Введите второе число: ";
		cin >> d;

		if (d == 0) {
			cout << endl;
			cout << "[-]Ошибка!" << endl;
			cout << endl;
			cout << "[-]Чтобы вернуться в меню нажмите 1 или любую другую, чтобы выйти из программы: ";
			cin >> menu;

			if (menu == 1) {
				Clear;
				main();
			}
		}
		else {
			cout << endl;
			cout << "[-]Результат: " << c << " % " << d << " = " << c % d << endl;
			cout << endl;
			cout << "[-]Чтобы вернуться в меню нажмите 1 или любую другую, чтобы выйти из программы: ";
			cin >> menu;

			if (menu == 1) {
				Clear;
				main();
			}
		}
	}

}

void Exit() {

	cout << "[-]Вы вышли из программы" << endl;
	exit(-1);

}

void Default() {

	cout << "[-]Ошибка!" << endl;
	cout << endl;
	cout << "[-]Чтобы вернуться в меню нажмите 1 или любую другую, чтобы выйти из программы: ";
	cin >> menu;

	if (menu == 1) {
		Clear;
		main();
	}

}

int main() {

		setlocale(0, "");

		cout << "[-]Программа \"Калькулятор\"" << endl;
		cout << endl;
		cout << "[1]Сложение" << endl;
		cout << "[2]Вычитание" << endl;
		cout << "[3]Умножение" << endl;
		cout << "[4]Деление" << endl;
		cout << "[5]Деление с остатком" << endl;
		cout << "[0]Выход" << endl;
		cout << endl;
		cout << "[-]Выберите: ";
		cin >> menu;
		Clear;

		switch (menu) {
		case 1:
			Addition();
			break;
		case 2:
			Subtraction();
			break;
		case 3:
			Multiplication();
			break;
		case 4:
			Division();
			break;
		case 5:
			DivisionWithRemainder();
			break;
		case 0:
			Exit();
			break;
		default:
			Default();
			break;
		}

	return 0;

}
