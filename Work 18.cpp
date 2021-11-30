#include <iostream>
#include <windows.h>

#define clear system("cls")
using namespace std;

short xColor = 2, oColor = 5;

void setting();

void menu(int settings);

int nolik(int settings) {
	clear;
	cout << "Нолик выйграл!" << endl << endl;

	cout << "Введите 1, чтобы вернутся в меню: ";

	int o1;
	cin >> o1;

	if (o1 == 1) {
		menu(settings);
	}
	else {
		cout << "Введенно неверное значение!";
	}
	return 0;
}

int krestik(int settings) {
	clear;
	cout << "Крестик выйграл!" << endl << endl;

	cout << "Введите 1, чтобы вернутся в меню: ";

	int o;
	cin >> o;

	if (o == 1) {
		menu(settings);
	}
	else {
		cout << "Введенно неверное значение!";
	}
	return 0;
}

void xoColor()
{
	cout << " [c] Available colors for marks: \n\n";
	cout << " [1] - Red\n";
	cout << " [2] - Green\n";
	cout << " [3] - Yellow\n";
	cout << " [4] - Blue\n";
	cout << " [5] - Purple\n";
	cout << " [6] - Cyan\n";
	cout << " [7] - Default\n";

	cout << "\n [?] Choose your X color: ";
	cin >> xColor;
	while (xColor < 1 || xColor > 7)
	{
		cout << "\n [!]Error! There`s no such color.\n [?] Try again: ";
		cin >> xColor;
		cout << endl;
	}
	cout << "\n [?] Choose your O color: ";
	cin >> oColor;
	while (oColor < 1 || oColor > 7)
	{
		cout << "\n [!]Error! There`s no such color.\n [?] Try again: ";
		cin >> oColor;
		cout << endl;
	}
	cout << "\n\n";
}

void setting() {
	clear;
	cout << "[+] Настройки" << endl << endl;
	cout << "[1] 3 x 3" << endl;
	cout << "[2] 4 x 4" << endl;
	cout << "[3] 5 x 5" << endl;
	cout << "[4] Цвет крестика и нолика" << endl;
	cout << "[-] Выберите размер: ";

	int setting;
	cin >> setting;

	if (setting == 1) {
		menu(setting);
	}
	if (setting == 2) {
		menu(setting);
	}
	if (setting == 3) {
		menu(setting);
	}
	if (setting == 4) {
		cout << " [c] Available colors for marks: \n\n";
		cout << " [1] - Red\n";
		cout << " [2] - Green\n";
		cout << " [3] - Yellow\n";
		cout << " [4] - Blue\n";
		cout << " [5] - Purple\n";
		cout << " [6] - Cyan\n";
		cout << " [7] - Default\n";

		cout << "\n [?] Choose your X color: ";
		cin >> xColor;
		while (xColor < 1 || xColor > 7)
		{
			cout << "\n [!]Error! There`s no such color.\n [?] Try again: ";
			cin >> xColor;
			cout << endl;
		}
		cout << "\n [?] Choose your O color: ";
		cin >> oColor;
		while (oColor < 1 || oColor > 7)
		{
			cout << "\n [!]Error! There`s no such color.\n [?] Try again: ";
			cin >> oColor;
			cout << endl;
			menu(setting);
		}
		cout << "\n\n";
	}
}

void game3x3(int settings) {
	const int vale1 = 9;
	int masiv1[vale1][vale1] = {
		{4,0,1,4,0,4,1,0,4},
		{9,9,8,9,9,9,8,9,9},
		{4,0,1,4,0,4,1,0,4},
		{9,9,8,9,9,9,8,9,9},
		{4,0,1,4,0,4,1,0,4}
	};

	clear;

	int chet1 = 0;
	bool vin = false;
	int A;
	int B;
	int gam1;
	int vod1;

	cout << "Введите 1, чтобы начать: ";

	cin >> gam1;

	if (gam1 == 1) {
		for (int i = 0; i < vale1; i++) {
			for (int h = 0; h < vale1; h++) {
				if (masiv1[i][h] == 1) {
					cout << "|";
				}
				else if (masiv1[i][h] == 0) {
					cout << " ";
				}
				else if (masiv1[i][h] == 9) {
					cout << "-";
				}
				else if (masiv1[i][h] == 8) {
					cout << "+";
				}
				else if (masiv1[i][h] == 4) {
					cout << " ";
				}
				else if (masiv1[i][h] == 2) {
					cout << "X";
				}
				else if (masiv1[i][h] == 3) {
					cout << "O";
				}
				else {
					cout << "ОШИБКА!";
				}
			}
			cout << endl;
		}
	}

	for (int i = 0; i < vale1; i++) {
		if (vin == false) {
			for (bool R = false; R == false;) {
				cout << "Ход крестика\n";
				cout << "Введите номер ячейки: ";
				cin >> vod1;
				if (vod1 == 1) {
					A = 0;
					B = 1;
					clear;
				}
				if (vod1 == 2) {
					A = 0;
					B = 4;
					clear;
				}
				if (vod1 == 3) {
					A = 0;
					B = 7;
					clear;
				}
				if (vod1 == 4) {
					A = 2;
					B = 1;
					clear;
				}
				if (vod1 == 5) {
					A = 2;
					B = 4;
					clear;
				}
				if (vod1 == 6) {
					A = 2;
					B = 7;
					clear;
				}
				if (vod1 == 7) {
					A = 4;
					B = 1;
					clear;
				}
				if (vod1 == 8) {
					A = 4;
					B = 4;
					clear;
				}
				if (vod1 == 9) {
					A = 4;
					B = 7;
					clear;
				}
				if (masiv1[A][B] == 0) {
					masiv1[A][B] = 2;
					R = true;
					vin = true;
				}
				if ((masiv1[0][7] == 2 && masiv1[2][4] == 2 && masiv1[4][1] == 2) ||
					(masiv1[0][1] == 2 && masiv1[2][4] == 2 && masiv1[4][7] == 2) ||
					(masiv1[0][7] == 2 && masiv1[2][7] == 2 && masiv1[4][7] == 2) ||
					(masiv1[0][4] == 2 && masiv1[2][4] == 2 && masiv1[4][4] == 2) ||
					(masiv1[0][1] == 2 && masiv1[2][1] == 2 && masiv1[4][1] == 2) ||
					(masiv1[4][1] == 2 && masiv1[4][4] == 2 && masiv1[4][7] == 2) ||
					(masiv1[2][1] == 2 && masiv1[2][4] == 2 && masiv1[2][7] == 2) ||
					(masiv1[0][1] == 2 && masiv1[0][4] == 2 && masiv1[0][7] == 2)) {
					i = 1000;
					krestik(settings);
				}
				if (chet1 == 8) {
					i = 1000;
					clear;
					cout << "Ничья" << endl << endl;

					cout << "Введите 1, чтобы вернутся в меню: ";

					int v1;
					cin >> v1;

					if (v1 == 1) {
						menu(settings);
					}
					else {
						cout << "Введенно неверное значение!";
					}
				}
				chet1 = chet1 + 1;
			}
		}

		else if (vin == true) {
			for (bool R = false; R == false;) {
				cout << "Ход нолика\n";
				cout << "Введите номер ячейки:";
				cin >> vod1;
				if (vod1 == 1) {
					A = 0;
					B = 1;
					clear;
				}
				if (vod1 == 2) {
					A = 0;
					B = 4;
					clear;
				}
				if (vod1 == 3) {
					A = 0;
					B = 7;
					clear;
				}
				if (vod1 == 4) {
					A = 2;
					B = 1;
					clear;
				}
				if (vod1 == 5) {
					A = 2;
					B = 4;
					clear;
				}
				if (vod1 == 6) {
					A = 2;
					B = 7;
					clear;
				}
				if (vod1 == 7) {
					A = 4;
					B = 1;
					clear;
				}
				if (vod1 == 8) {
					A = 4;
					B = 4;
					clear;
				}
				if (vod1 == 9) {
					A = 4;
					B = 7;
					clear;
				}
				if (masiv1[A][B] == 0) {
					masiv1[A][B] = 3;
					R = true;
					vin = false;
				}
				if ((masiv1[0][7] == 3 && masiv1[2][4] == 3 && masiv1[4][1] == 3) ||
					(masiv1[0][1] == 3 && masiv1[2][4] == 3 && masiv1[4][7] == 3) ||
					(masiv1[0][7] == 3 && masiv1[2][7] == 3 && masiv1[4][7] == 3) ||
					(masiv1[0][4] == 3 && masiv1[2][4] == 3 && masiv1[4][4] == 3) ||
					(masiv1[0][1] == 3 && masiv1[2][1] == 3 && masiv1[4][1] == 3) ||
					(masiv1[4][1] == 3 && masiv1[4][4] == 3 && masiv1[4][7] == 3) ||
					(masiv1[2][1] == 3 && masiv1[2][4] == 3 && masiv1[2][7] == 3) ||
					(masiv1[0][1] == 3 && masiv1[0][4] == 3 && masiv1[0][7] == 3)) {
					i = 1000;
					nolik(settings);
				}
				if (chet1 == 8) {
					clear;
					i = 1000;
					cout << "Ничья" << endl << endl;

					cout << "Введите 1, чтобы вернутся в меню: ";

					int v;
					cin >> v;

					if (v == 1) {
						menu(settings);
					}
					else {
						cout << "Введенно неверное значение!";
					}
				}
				chet1 = chet1 + 1;
			}
		}

		for (int i = 0; i < vale1; i++) {
			for (int h = 0; h < vale1; h++) {
				if (masiv1[i][h] == 1) {
					cout << "|";
				}
				else if (masiv1[i][h] == 0) {
					cout << " ";
				}
				else if (masiv1[i][h] == 9) {
					cout << "-";
				}
				else if (masiv1[i][h] == 8) {
					cout << "+";
				}
				else if (masiv1[i][h] == 4) {
					cout << " ";
				}
				else if (masiv1[i][h] == 2) {
					cout << "X";
				}
				else if (masiv1[i][h] == 3) {
					cout << "O";
				}
				else {
					cout << "ОШИБКА!";
				}
			}
			cout << endl;
		}
	}
}

void game4x4(int settings) {
	const int vale2 = 13;
	int masiv2[vale2][vale2]{
		{4,0,1,4,0,4,1,4,0,4,1,0,4},
		{9,9,8,9,9,9,8,9,9,9,8,9,9},
		{4,0,1,4,0,4,1,4,0,4,1,0,4},
		{9,9,8,9,9,9,8,9,9,9,8,9,9},
		{4,0,1,4,0,4,1,4,0,4,1,0,4},
		{9,9,8,9,9,9,8,9,9,9,8,9,9},
		{4,0,1,4,0,4,1,4,0,4,1,0,4}
	};

	clear;

	int chet2 = 0;
	bool vin2 = false;
	int A2;
	int B2;
	int gam2;
	int vod2;
	int vo2;

	cout << "Введите 1, чтобы начать: ";

	cin >> gam2;

	if (gam2 == 1) {
		for (int i2 = 0; i2 < vale2; i2++) {
			for (int h = 0; h < vale2; h++) {
				if (masiv2[i2][h] == 1) {
					cout << "|";
				}
				else if (masiv2[i2][h] == 0) {
					cout << " ";
				}
				else if (masiv2[i2][h] == 9) {
					cout << "-";
				}
				else if (masiv2[i2][h] == 8) {
					cout << "+";
				}
				else if (masiv2[i2][h] == 4) {
					cout << " ";
				}
				else if (masiv2[i2][h] == 2) {
					cout << "X";
				}
				else if (masiv2[i2][h] == 3) {
					cout << "O";
				}
				else {
					cout << "ОШИБКА!";
				}
			}
			cout << endl;
		}
	}

	for (int i2 = 0; i2 < vale2; i2++) {
		for (int j = 0; j < vale2; j++) {
			if (vin2 == false) {
				cout << "Ход крестика\n";
				cout << "Введите номер ряда: ";
				cin >> vod2;
				cout << "Введите номер ячейки: ";
				cin >> vo2;
				chet2 = chet2 + 1;
				if (vod2 == 1 && vo2 == 1) {
					A2 = 0;
					B2 = 1;
					clear;
				}
				else if (vod2 == 1 && vo2 == 2) {
					A2 = 0;
					B2 = 4;
					clear;
				}
				else if (vod2 == 1 && vo2 == 3) {
					A2 = 0;
					B2 = 8;
					clear;
				}
				else if (vod2 == 1 && vo2 == 4) {
					A2 = 0;
					B2 = 11;
					clear;
				}
				else if (vod2 == 2 && vo2 == 1) {
					A2 = 2;
					B2 = 1;
					clear;
				}
				else if (vod2 == 2 && vo2 == 2) {
					A2 = 2;
					B2 = 4;
					clear;
				}
				else if (vod2 == 2 && vo2 == 3) {
					A2 = 2;
					B2 = 8;
					clear;
				}
				else if (vod2 == 2 && vo2 == 4) {
					A2 = 2;
					B2 = 11;
					clear;
				}
				else if (vod2 == 3 && vo2 == 1) {
					A2 = 4;
					B2 = 1;
					clear;
				}
				else if (vod2 == 3 && vo2 == 2) {
					A2 = 4;
					B2 = 4;
					clear;
				}
				else if (vod2 == 3 && vo2 == 3) {
					A2 = 4;
					B2 = 8;
					clear;
				}
				else if (vod2 == 3 && vo2 == 4) {
					A2 = 4;
					B2 = 11;
					clear;
				}
				else if (vod2 == 4 && vo2 == 1) {
					A2 = 6;
					B2 = 1;
					clear;
				}
				else if (vod2 == 4 && vo2 == 2) {
					A2 = 6;
					B2 = 4;
					clear;
				}
				else if (vod2 == 4 && vo2 == 3) {
					A2 = 6;
					B2 = 8;
					clear;
				}
				else if (vod2 == 4 && vo2 == 4) {
					A2 = 6;
					B2 = 11;
					clear;
				}
				else {
					cout << "Введите правильно занчение!";
				}
				if (masiv2[A2][B2] == 0) {
					masiv2[A2][B2] = 2;
					vin2 = true;
				}
				else {
					cout << "Ошибка!";
				}
				if ((masiv2[0][1] == 2 && masiv2[0][4] == 2 && masiv2[0][8] == 2 && masiv2[0][11] == 2) ||
					(masiv2[2][1] == 2 && masiv2[2][4] == 2 && masiv2[2][8] == 2 && masiv2[2][11] == 2) ||
					(masiv2[4][1] == 2 && masiv2[4][4] == 2 && masiv2[4][8] == 2 && masiv2[4][11] == 2) ||
					(masiv2[6][1] == 2 && masiv2[6][4] == 2 && masiv2[6][8] == 2 && masiv2[6][11] == 2) ||
					(masiv2[0][1] == 2 && masiv2[2][1] == 2 && masiv2[4][1] == 2 && masiv2[6][1] == 2) ||
					(masiv2[0][4] == 2 && masiv2[2][4] == 2 && masiv2[4][4] == 2 && masiv2[6][4] == 2) ||
					(masiv2[0][8] == 2 && masiv2[2][8] == 2 && masiv2[4][8] == 2 && masiv2[6][8] == 2) ||
					(masiv2[0][11] == 2 && masiv2[2][11] == 2 && masiv2[4][11] == 2 && masiv2[6][11] == 2) ||
					(masiv2[0][1] == 2 && masiv2[2][4] == 2 && masiv2[4][8] == 2 && masiv2[6][11] == 2) ||
					(masiv2[0][11] == 2 && masiv2[2][8] == 2 && masiv2[4][4] == 2 && masiv2[6][1] == 2)) {
					i2 = 1000;
					krestik(settings);
				}
				if (chet2 == 16) {
					i2 = 1000;
					clear;
					cout << "Ничья" << endl << endl;

					cout << "Введите 1, чтобы вернутся в меню: ";

					int v2;
					cin >> v2;

					if (v2 == 1) {
						menu(settings);
					}
					else {
						cout << "Введенно неверное значение!";
					}
				}
			}

			else if (vin2 == true) {
				cout << "Ход нолика\n";
				cout << "Введите номер ряда: ";
				cin >> vod2;
				cout << "Введите номер ячейки: ";
				cin >> vo2;
				chet2 = chet2 + 1;
				if (vod2 == 1 && vo2 == 1) {
					A2 = 0;
					B2 = 1;
					clear;
				}
				else if (vod2 == 1 && vo2 == 2) {
					A2 = 0;
					B2 = 4;
					clear;
				}
				else if (vod2 == 1 && vo2 == 3) {
					A2 = 0;
					B2 = 8;
					clear;
				}
				else if (vod2 == 1 && vo2 == 4) {
					A2 = 0;
					B2 = 11;
					clear;
				}
				else if (vod2 == 2 && vo2 == 1) {
					A2 = 2;
					B2 = 1;
					clear;
				}
				else if (vod2 == 2 && vo2 == 2) {
					A2 = 2;
					B2 = 4;
					clear;
				}
				else if (vod2 == 2 && vo2 == 3) {
					A2 = 2;
					B2 = 8;
					clear;
				}
				else if (vod2 == 2 && vo2 == 4) {
					A2 = 2;
					B2 = 11;
					clear;
				}
				else if (vod2 == 3 && vo2 == 1) {
					A2 = 4;
					B2 = 1;
					clear;
				}
				else if (vod2 == 3 && vo2 == 2) {
					A2 = 4;
					B2 = 4;
					clear;
				}
				else if (vod2 == 3 && vo2 == 3) {
					A2 = 4;
					B2 = 8;
					clear;
				}
				else if (vod2 == 3 && vo2 == 4) {
					A2 = 4;
					B2 = 11;
					clear;
				}
				else if (vod2 == 4 && vo2 == 1) {
					A2 = 6;
					B2 = 1;
					clear;
				}
				else if (vod2 == 4 && vo2 == 2) {
					A2 = 6;
					B2 = 4;
					clear;
				}
				else if (vod2 == 4 && vo2 == 3) {
					A2 = 6;
					B2 = 8;
					clear;
				}
				else if (vod2 == 4 && vo2 == 4) {
					A2 = 6;
					B2 = 11;
					clear;
				}
				else {
					cout << "Введите правильно занчение!";
				}
				if (masiv2[A2][B2] == 0) {
					masiv2[A2][B2] = 3;
					vin2 = false;
				}
				else {
					cout << "Ошибка!";
				}
				if ((masiv2[0][1] == 3 && masiv2[0][4] == 3 && masiv2[0][8] == 3 && masiv2[0][11] == 3) ||
					(masiv2[2][1] == 3 && masiv2[2][4] == 3 && masiv2[2][8] == 3 && masiv2[2][11] == 3) ||
					(masiv2[4][1] == 3 && masiv2[4][4] == 3 && masiv2[4][8] == 3 && masiv2[4][11] == 3) ||
					(masiv2[6][1] == 3 && masiv2[6][4] == 3 && masiv2[6][8] == 3 && masiv2[6][11] == 3) ||
					(masiv2[0][1] == 3 && masiv2[2][1] == 3 && masiv2[4][1] == 3 && masiv2[6][1] == 3) ||
					(masiv2[0][4] == 3 && masiv2[2][4] == 3 && masiv2[4][4] == 3 && masiv2[6][4] == 3) ||
					(masiv2[0][8] == 3 && masiv2[2][8] == 3 && masiv2[4][8] == 3 && masiv2[6][8] == 3) ||
					(masiv2[0][11] == 3 && masiv2[2][11] == 3 && masiv2[4][11] == 3 && masiv2[6][11] == 3) ||
					(masiv2[0][1] == 3 && masiv2[2][4] == 3 && masiv2[4][8] == 3 && masiv2[6][11] == 3) ||
					(masiv2[0][11] == 3 && masiv2[2][8] == 3 && masiv2[4][4] == 3 && masiv2[6][1] == 3)) {
					i2 = 1000;
					nolik(settings);
				}
				if (chet2 == 16) {
					clear;
					i2 = 1000;
					cout << "Ничья" << endl << endl;

					cout << "Введите 1, чтобы вернутся в меню: ";

					int v3;
					cin >> v3;

					if (v3 == 1) {
						menu(settings);
					}
					else {
						cout << "Введенно неверное значение!";
					}
				}
			}

			for (int i2 = 0; i2 < vale2; i2++) {
				for (int h = 0; h < vale2; h++) {
					if (masiv2[i2][h] == 1) {
						cout << "|";
					}
					else if (masiv2[i2][h] == 0) {
						cout << " ";
					}
					else if (masiv2[i2][h] == 9) {
						cout << "-";
					}
					else if (masiv2[i2][h] == 8) {
						cout << "+";
					}
					else if (masiv2[i2][h] == 4) {
						cout << " ";
					}
					else if (masiv2[i2][h] == 2) {
						cout << "X";
					}
					else if (masiv2[i2][h] == 3) {
						cout << "O";
					}
					else {
						cout << "ОШИБКА!";
					}
				}
				cout << endl;
			}
		}
	}
}

void game5x5(int settings) {
	const int vale3 = 17;
	int masiv3[vale3][vale3]{
		{4,0,1,4,0,4,1,4,0,4,1,4,0,4,1,0,4},
		{9,9,8,9,9,9,8,9,9,9,8,9,9,9,8,9,9},
		{4,0,1,4,0,4,1,4,0,4,1,4,0,4,1,0,4},
		{9,9,8,9,9,9,8,9,9,9,8,9,9,9,8,9,9},
		{4,0,1,4,0,4,1,4,0,4,1,4,0,4,1,0,4},
		{9,9,8,9,9,9,8,9,9,9,8,9,9,9,8,9,9},
		{4,0,1,4,0,4,1,4,0,4,1,4,0,4,1,0,4},
		{9,9,8,9,9,9,8,9,9,9,8,9,9,9,8,9,9},
		{4,0,1,4,0,4,1,4,0,4,1,4,0,4,1,0,4}
	};

	clear;

	int chet3 = 0;
	bool vin3 = false;
	int A3;
	int B3;
	int gam3;
	int vod3;
	int vo3;

	cout << "Введите 1, чтобы начать: ";

	cin >> gam3;

	if (gam3 == 1) {
		for (int i3 = 0; i3 < vale3; i3++) {
			for (int h = 0; h < vale3; h++) {
				if (masiv3[i3][h] == 1) {
					cout << "|";
				}
				else if (masiv3[i3][h] == 0) {
					cout << " ";
				}
				else if (masiv3[i3][h] == 9) {
					cout << "-";
				}
				else if (masiv3[i3][h] == 8) {
					cout << "+";
				}
				else if (masiv3[i3][h] == 4) {
					cout << " ";
				}
				else if (masiv3[i3][h] == 2) {
					cout << "X";
				}
				else if (masiv3[i3][h] == 3) {
					cout << "O";
				}
				else {
					cout << "ОШИБКА!";
				}
			}
			cout << endl;
		}
	}

	for (int i3 = 0; i3 < vale3; i3++) {
		for (int j2 = 0; j2 < vale3; j2++) {
			if (vin3 == false) {
				chet3 = chet3 + 1;
				cout << "Ход крестика\n";
				cout << "Введите номер ряда: ";
				cin >> vod3;
				cout << "Введите номер ячейки: ";
				cin >> vo3;
				if (vod3 == 1 && vo3 == 1) {
					A3 = 0;
					B3 = 1;
					clear;
				}
				else if (vod3 == 1 && vo3 == 2) {
					A3 = 0;
					B3 = 4;
					clear;
				}
				else if (vod3 == 1 && vo3 == 3) {
					A3 = 0;
					B3 = 8;
					clear;
				}
				else if (vod3 == 1 && vo3 == 4) {
					A3 = 0;
					B3 = 12;
					clear;
				}
				else if (vod3 == 1 && vo3 == 5) {
					A3 = 0;
					B3 = 15;
					clear;
				}
				else if (vod3 == 2 && vo3 == 1) {
					A3 = 2;
					B3 = 1;
					clear;
				}
				else if (vod3 == 2 && vo3 == 2) {
					A3 = 2;
					B3 = 4;
					clear;
				}
				else if (vod3 == 2 && vo3 == 3) {
					A3 = 2;
					B3 = 8;
					clear;
				}
				else if (vod3 == 2 && vo3 == 4) {
					A3 = 2;
					B3 = 12;
					clear;
				}
				else if (vod3 == 2 && vo3 == 5) {
					A3 = 2;
					B3 = 15;
					clear;
				}
				else if (vod3 == 3 && vo3 == 1) {
					A3 = 4;
					B3 = 1;
					clear;
				}
				else if (vod3 == 3 && vo3 == 2) {
					A3 = 4;
					B3 = 4;
					clear;
				}
				else if (vod3 == 3 && vo3 == 3) {
					A3 = 4;
					B3 = 8;
					clear;
				}
				else if (vod3 == 3 && vo3 == 4) {
					A3 = 4;
					B3 = 12;
					clear;
				}
				else if (vod3 == 3 && vo3 == 5) {
					A3 = 4;
					B3 = 15;
					clear;
				}
				else if (vod3 == 4 && vo3 == 1) {
					A3 = 6;
					B3 = 1;
					clear;
				}
				else if (vod3 == 4 && vo3 == 2) {
					A3 = 6;
					B3 = 4;
					clear;
				}
				else if (vod3 == 4 && vo3 == 3) {
					A3 = 6;
					B3 = 8;
					clear;
				}
				else if (vod3 == 4 && vo3 == 4) {
					A3 = 6;
					B3 = 12;
					clear;
				}
				else if (vod3 == 4 && vo3 == 5) {
					A3 = 6;
					B3 = 15;
					clear;
				}
				else if (vod3 == 5 && vo3 == 1) {
					A3 = 8;
					B3 = 1;
					clear;
				}
				else if (vod3 == 5 && vo3 == 2) {
					A3 = 8;
					B3 = 4;
					clear;
				}
				else if (vod3 == 5 && vo3 == 3) {
					A3 = 8;
					B3 = 8;
					clear;
				}
				else if (vod3 == 5 && vo3 == 4) {
					A3 = 8;
					B3 = 12;
					clear;
				}
				else if (vod3 == 5 && vo3 == 5) {
					A3 = 8;
					B3 = 15;
					clear;
				}
				else {
					cout << "Введите правильно занчение!" << endl;
				}
				if (masiv3[A3][B3] == 0) {
					masiv3[A3][B3] = 2;
					vin3 = true;
				}
				else {
					cout << "Ошибка!";
				}
				if ((masiv3[0][1] == 2 && masiv3[0][4] == 2 && masiv3[0][8] == 2 && masiv3[0][12] == 2 && masiv3[0][15] == 2) ||
					(masiv3[2][1] == 2 && masiv3[2][4] == 2 && masiv3[2][8] == 2 && masiv3[2][12] == 2 && masiv3[2][15] == 2) ||
					(masiv3[4][1] == 2 && masiv3[4][4] == 2 && masiv3[4][8] == 2 && masiv3[4][12] == 2 && masiv3[4][15] == 2) ||
					(masiv3[6][1] == 2 && masiv3[6][4] == 2 && masiv3[6][8] == 2 && masiv3[6][12] == 2 && masiv3[6][15] == 2) ||
					(masiv3[8][1] == 2 && masiv3[8][4] == 2 && masiv3[8][8] == 2 && masiv3[8][12] == 2 && masiv3[8][15] == 2) ||
					(masiv3[0][1] == 2 && masiv3[2][1] == 2 && masiv3[4][1] == 2 && masiv3[6][1] == 2 && masiv3[8][1] == 2) ||
					(masiv3[0][4] == 2 && masiv3[2][4] == 2 && masiv3[4][4] == 2 && masiv3[6][4] == 2 && masiv3[8][4] == 2) ||
					(masiv3[0][6] == 2 && masiv3[2][6] == 2 && masiv3[4][6] == 2 && masiv3[4][6] == 2 && masiv3[8][6] == 2) ||
					(masiv3[0][8] == 2 && masiv3[2][8] == 2 && masiv3[4][8] == 2 && masiv3[6][8] == 2 && masiv3[8][8] == 2) ||
					(masiv3[0][12] == 2 && masiv3[2][12] == 2 && masiv3[4][12] == 2 && masiv3[6][12] == 2 && masiv3[8][12] == 2) ||
					(masiv3[0][15] == 2 && masiv3[2][15] == 2 && masiv3[4][15] == 2 && masiv3[6][15] == 2 && masiv3[8][15] == 2) ||
					(masiv3[0][1] == 2 && masiv3[2][4] == 2 && masiv3[4][8] == 2 && masiv3[6][12] == 2 && masiv3[8][15] == 2) ||
					(masiv3[0][15] == 2 && masiv3[8][12] == 2 && masiv3[6][8] == 2 && masiv3[4][4] == 2 && masiv3[0][1] == 2) ||
					(masiv3[0][15] == 2 && masiv3[2][12] == 2 && masiv3[4][8] == 2 && masiv3[6][4] == 2 && masiv3[8][1] == 2)) {
					i3 = 1000;
					krestik(settings);
				}
				if (chet3 == 25) {
					i3 = 1000;
					clear;
					cout << "Ничья" << endl << endl;

					cout << "Введите 1, чтобы вернутся в меню: ";

					int v3;
					cin >> v3;

					if (v3 == 1) {
						menu(settings);
					}
					else {
						cout << "Введенно неверное значение!";
					}
				}
			}

			else if (vin3 == true) {
				chet3 = chet3 + 1;
				cout << "Ход нолика\n";
				cout << "Введите номер ряда: ";
				cin >> vod3;
				cout << "Введите номер ячейки: ";
				cin >> vo3;
				if (vod3 == 1 && vo3 == 1) {
					A3 = 0;
					B3 = 1;
					clear;
				}
				else if (vod3 == 1 && vo3 == 2) {
					A3 = 0;
					B3 = 4;
					clear;
				}
				else if (vod3 == 1 && vo3 == 3) {
					A3 = 0;
					B3 = 8;
					clear;
				}
				else if (vod3 == 1 && vo3 == 4) {
					A3 = 0;
					B3 = 12;
					clear;
				}
				else if (vod3 == 1 && vo3 == 5) {
					A3 = 0;
					B3 = 15;
					clear;
				}
				else if (vod3 == 2 && vo3 == 1) {
					A3 = 2;
					B3 = 1;
					clear;
				}
				else if (vod3 == 2 && vo3 == 2) {
					A3 = 2;
					B3 = 4;
					clear;
				}
				else if (vod3 == 2 && vo3 == 3) {
					A3 = 2;
					B3 = 8;
					clear;
				}
				else if (vod3 == 2 && vo3 == 4) {
					A3 = 2;
					B3 = 12;
					clear;
				}
				else if (vod3 == 2 && vo3 == 5) {
					A3 = 2;
					B3 = 15;
					clear;
				}
				else if (vod3 == 3 && vo3 == 1) {
					A3 = 4;
					B3 = 1;
					clear;
				}
				else if (vod3 == 3 && vo3 == 2) {
					A3 = 4;
					B3 = 4;
					clear;
				}
				else if (vod3 == 3 && vo3 == 3) {
					A3 = 4;
					B3 = 8;
					clear;
				}
				else if (vod3 == 3 && vo3 == 4) {
					A3 = 4;
					B3 = 12;
					clear;
				}
				else if (vod3 == 3 && vo3 == 5) {
					A3 = 4;
					B3 = 15;
					clear;
				}
				else if (vod3 == 4 && vo3 == 1) {
					A3 = 6;
					B3 = 1;
					clear;
				}
				else if (vod3 == 4 && vo3 == 2) {
					A3 = 6;
					B3 = 4;
					clear;
				}
				else if (vod3 == 4 && vo3 == 3) {
					A3 = 6;
					B3 = 8;
					clear;
				}
				else if (vod3 == 4 && vo3 == 4) {
					A3 = 6;
					B3 = 12;
					clear;
				}
				else if (vod3 == 4 && vo3 == 5) {
					A3 = 6;
					B3 = 15;
					clear;
				}
				else if (vod3 == 5 && vo3 == 1) {
					A3 = 8;
					B3 = 1;
					clear;
				}
				else if (vod3 == 5 && vo3 == 2) {
					A3 = 8;
					B3 = 4;
					clear;
				}
				else if (vod3 == 5 && vo3 == 3) {
					A3 = 8;
					B3 = 8;
					clear;
				}
				else if (vod3 == 5 && vo3 == 4) {
					A3 = 8;
					B3 = 12;
					clear;
				}
				else if (vod3 == 5 && vo3 == 5) {
					A3 = 8;
					B3 = 15;
					clear;
				}
				else {
					cout << "Введите правильно занчение!";
				}
				if (masiv3[A3][B3] == 0) {
					masiv3[A3][B3] = 3;
					vin3 = false;
				}
				else {
					cout << "Ошибка!";
				}
				if ((masiv3[0][1] == 3 && masiv3[0][4] == 3 && masiv3[0][8] == 3 && masiv3[0][12] == 3 && masiv3[0][15] == 3) ||
					(masiv3[2][1] == 3 && masiv3[2][4] == 3 && masiv3[2][8] == 3 && masiv3[2][12] == 3 && masiv3[2][15] == 3) ||
					(masiv3[4][1] == 3 && masiv3[4][4] == 3 && masiv3[4][8] == 3 && masiv3[4][12] == 3 && masiv3[4][15] == 3) ||
					(masiv3[6][1] == 3 && masiv3[6][4] == 3 && masiv3[6][8] == 3 && masiv3[6][12] == 3 && masiv3[6][15] == 3) ||
					(masiv3[8][1] == 3 && masiv3[8][4] == 3 && masiv3[8][8] == 3 && masiv3[8][12] == 3 && masiv3[8][15] == 3) ||
					(masiv3[0][1] == 3 && masiv3[2][1] == 3 && masiv3[4][1] == 3 && masiv3[6][1] == 3 && masiv3[8][1] == 3) ||
					(masiv3[0][4] == 3 && masiv3[2][4] == 3 && masiv3[4][4] == 3 && masiv3[6][4] == 3 && masiv3[8][4] == 3) ||
					(masiv3[0][6] == 3 && masiv3[2][6] == 3 && masiv3[4][6] == 3 && masiv3[6][6] == 3 && masiv3[8][6] == 3) ||
					(masiv3[0][8] == 3 && masiv3[2][8] == 3 && masiv3[4][8] == 3 && masiv3[6][8] == 3 && masiv3[8][8] == 3) ||
					(masiv3[0][12] == 3 && masiv3[2][12] == 3 && masiv3[4][12] == 3 && masiv3[6][12] == 3 && masiv3[8][12] == 3) ||
					(masiv3[0][15] == 3 && masiv3[2][15] == 3 && masiv3[4][15] == 3 && masiv3[6][15] == 3 && masiv3[8][15] == 3) ||
					(masiv3[0][1] == 3 && masiv3[2][4] == 3 && masiv3[4][8] == 3 && masiv3[6][12] == 3 && masiv3[8][15] == 3) ||
					(masiv3[0][15] == 3 && masiv3[8][12] == 3 && masiv3[6][8] == 3 && masiv3[4][4] == 3 && masiv3[0][1] == 3)) {
					i3 = 1000;
					nolik(settings);
				}
				if (chet3 == 25) {
					clear;
					i3 = 1000;
					cout << "Ничья" << endl << endl;

					cout << "Введите 1, чтобы вернутся в меню: ";

					int v3;
					cin >> v3;

					if (v3 == 1) {
						menu(settings);
					}
					else {
						cout << "Введенно неверное значение!";
					}
				}
			}

			for (int i3 = 0; i3 < vale3; i3++) {
				for (int h = 0; h < vale3; h++) {
					if (masiv3[i3][h] == 1) {
						cout << "|";
					}
					else if (masiv3[i3][h] == 0) {
						cout << " ";
					}
					else if (masiv3[i3][h] == 9) {
						cout << "-";
					}
					else if (masiv3[i3][h] == 8) {
						cout << "+";
					}
					else if (masiv3[i3][h] == 4) {
						cout << " ";
					}
					else if (masiv3[i3][h] == 2) {
						cout << "X";
					}
					else if (masiv3[i3][h] == 3) {
						cout << "O";
					}
					else {
						cout << "ОШИБКА!";
					}
				}
				cout << endl;
			}
		}
	}
}

void menu(int settings) {
	clear;
	cout << "'Крести нолики'" << endl << endl;
	cout << "[1] Играть" << endl;
	cout << "[2] Настройки" << endl;
	cout << "[3] Выйти" << endl;
	cout << "[-] Введите: ";

	int menu;
	cin >> menu;

	if (menu == 1) {
		if (settings == 1) {
			game3x3(settings);
		}
		if (settings == 2) {
			game4x4(settings);
		}
		if (settings == 3) {
			game5x5(settings);
		}
		if (settings == 4) {
			xoColor();
		}
	}
	else if (menu == 2) {
		setting();
	}
	else if (menu == 3) {
		exit(-1);
	}
	else {
		clear;
		cout << "Введенно не верное значение!";
	}
}

int main(int settings) {
	setlocale(0, "");

	menu(settings);

	return 0;
}