#include <iostream>
#define Clear system("CLS");
using namespace std;
int main() {
	int start;
	do {
		setlocale(0, "");
		cout << "[-]Программа \"Геометрические фигуры\"" << endl;
		cout << endl;
		cout << "[1]Линия" << endl;
		cout << "[2]Квадрат" << endl;
		cout << "[3]Прямоугольник" << endl;
		cout << "[4]Треугольник" << endl;
		cout << "[5]Решетка" << endl;
		cout << "[6]Крестик" << endl;
		cout << "[7]Плюс" << endl;
		cout << "[0]Выход" << endl;
		cout << endl;
		cout << "[-]Выберите действие: ";
		int menu;
		int length;
		int size;
		int width;
		int height;
		char texture;
		int i;
		cin >> menu;
		Clear;
		switch (menu) {
			//Работа №7
		case 1:
			cout << "[-]Фигура: \"Линия\"" << endl;
			cout << endl;
			cout << "[1]Горизонтальная" << endl;
			cout << "[2]Вертикальная" << endl;
			cout << endl;
			cout << "[-]Выберите тип: ";
			i = 0;
			cin >> menu;
			Clear;
			switch (menu) {
			case 1:
				cout << "[-]Длина линии: ";
				cin >> length;
				cout << endl;
				cout << "[-]Текстура линии: ";
				cin >> texture;
				Clear;
				cout << "[-]Результат: " << endl;
				cout << endl;
				while (i < length)
				{
					cout << texture;
					i++;
				}
				cout << endl;
				break;
			case 2:
				cout << "[-]Длина линии: ";
				cin >> length;
				cout << endl;
				cout << "[-]Текстура линии: ";
				cin >> texture;
				Clear;
				cout << "[-]Результат: ";
				cout << endl;
				while (i < length)
				{
					cout << endl << texture;
					i++;
				}
				cout << endl;
				break;
			default:
				cout << "[-]Вы ввели не верное значение";
				cout << endl;
			}
			break;
			//Работа №8
		case 2:
			cout << "[-]Фигура: \"Квадрат\"" << endl;
			cout << endl;
			cout << "[1]Заполненный" << endl;
			cout << "[2]Пустой" << endl;
			cout << endl;
			cout << "[-]Выберите тип: ";
			cin >> menu;
			Clear;
			switch (menu) {
			case 1:
				cout << "[-]Размер: ";
				cin >> size;
				cout << endl;
				cout << "[-]Текстура: ";
				cin >> texture;
				Clear;
				cout << "[-]Результат: " << endl;
				cout << endl;
				for (int i = 0; i < size; i++) {
					for (int x = 0; x < size; x++) {
						cout << texture << " ";
					}
					cout << endl;
				}
				break;
			case 2:
				cout << "[-]Размер: ";
				cin >> size;
				cout << endl;
				cout << "[-]Текстура: ";
				cin >> texture;
				Clear;
				cout << "[-]Результат: " << endl;
				cout << endl;
				for (int i = 0; i < size; i++) {
					for (int x = 0; x < size; x++) {
						if (i == 0 || i == size - 1 || x == 0 || x == size - 1) {
							cout << texture << " ";
						}
						else {
							cout << "  ";
						}
					}
					cout << endl;
				}
				break;
			default:
				cout << "[-]Вы ввели не верное значение";
				cout << endl;
			}
			break;
			//Работа №9
		case 3:
			cout << "[-]Фигура: \"Прямоугольник\"" << endl;
			cout << endl;
			cout << "[1]Заполненный" << endl;
			cout << "[2]Пустой" << endl;
			cout << endl;
			cout << "[-]Выберите тип: ";
			cin >> menu;
			Clear;
			switch (menu) {
			case 1:
				cout << "[-]Ширина: ";
				cin >> width;
				cout << endl;
				cout << "[-]Высота: ";
				cin >> height;
				cout << endl;
				cout << "[-]Текстура: ";
				cin >> texture;
				Clear;
				cout << "[-]Результат: " << endl;
				cout << endl;
				for (int i = 0; i < height; i++) {
					for (int x = 0; x < width; x++) {
						cout << texture << " ";
					}
					cout << endl;
				}
				break;
			case 2:
				cout << "[-]Ширина: ";
				cin >> width;
				cout << endl;
				cout << "[-]Высота: ";
				cin >> height;
				cout << endl;
				cout << "[-]Текстура: ";
				cin >> texture;
				Clear;
				cout << "[-]Результат: " << endl;
				cout << endl;
				for (int i = 0; i < height; i++) {
					for (int x = 0; x < width; x++) {
						if (i == 0 || i == height - 1 || x == 0 || x == width - 1) {
							cout << texture << " ";
						}
						else {
							cout << "  ";
						}
					}
					cout << endl;
				}
				break;
			default:
				cout << "[-]Вы ввели не верное значение";
				cout << endl;
			}
			break;
			//Работа №10
		case 4:
			cout << "[-]Фигура: \"Треугольник\"" << endl;
			cout << endl;
			cout << "[1]Заполненный" << endl;
			cout << "[2]Пустой" << endl;
			cout << endl;
			cout << "[-]Выберите тип: ";
			cin >> menu;
			Clear;
			switch (menu) {
			case 1:
				cout << "[-]Высота: ";
				cin >> height;
				cout << endl;
				cout << "[-]Текстура: ";
				cin >> texture;
				Clear;
				cout << "[-]Результат: " << endl;
				for (int i = 0; i < height; i++) {
					for (int x = 0; x < height; x++) {
						if (x >= height / 2 - i && x <= height / 2 + i && i <= height / 2) {
							cout << texture << " ";
						}
						else {
							cout << "  ";
						}
					}
					cout << endl;
				}
				break;
			case 2:
				cout << "[-]Высота: ";
				cin >> height;
				cout << endl;
				cout << "[-]Текстура: ";
				cin >> texture;
				Clear;
				cout << "[-]Результат: " << endl;
				for (int i = 0; i < height; i++) {
					for (int x = 0; x < height; x++) {
						if (x == height / 2 + i || x == height / 2 - i || i == height / 2) {
							cout << texture << " ";
						}
						else {
							cout << "  ";
						}
					}
					cout << endl;
				}
				break;
			default:
				cout << "[-]Вы ввели не верное значение";
				cout << endl;
			}
			break;
			//Работа №11
		case 5:
			cout << "[-]Фигура: \"Решетка\"" << endl;
			cout << endl;
			cout << "[-]Размер: ";
			cin >> size;
			cout << endl;
			cout << "[-]Текстура: ";
			cin >> texture;
			Clear;
			cout << "[-]Результат: " << endl;
			cout << endl;
			for (int i = 0; i < size; i++) {
				for (int x = 0; x < size; x++) {
					if (x % 2 == 1 || i % 2 == 1) {
						cout << texture << " ";
					}
					else {
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
			//Работа №12
		case 6:
			cout << "[-]Фигура: \"Крестик\"" << endl;
			cout << endl;
			cout << "[-]Размер: ";
			cin >> size;
			cout << endl;
			cout << "[-]Текстура: ";
			cin >> texture;
			Clear;
			cout << "[-]Результат: " << endl;
			cout << endl;
			for (int i = 0; i < size; i++) {
				for (int x = 0; x < size; x++) {
					if (x == i || size - x == i + 1) {
						cout << texture << " ";
					}
					else {
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
			//Работа №13
		case 7:
			cout << "[-]Фигура: \"Плюс\"" << endl;
			cout << endl;
			cout << "[-]Размер: ";
			cin >> size;
			cout << endl;
			cout << "[-]Текстура: ";
			cin >> texture;
			Clear;
			cout << "[-]Результат: " << endl;
			cout << endl;
			for (int i = 0; i < size; i++) {
				for (int x = 0; x < size; x++) {
					if (x == size / 2 || i == size / 2) {
						cout << texture << " ";
					}
					else {
						cout << "  ";
					}
				}
				cout << endl;
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


