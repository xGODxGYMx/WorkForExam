#include <iostream>
#define Clear system("CLS");
using namespace std;
int main() {
	int start;
	do {
		setlocale(0, "");
		cout << "[-]��������� \"�������\"" << endl;
		cout << endl;
		cout << "[1]Int" << endl;
		cout << "[2]Short" << endl;
		cout << "[3]Long" << endl;
		cout << "[4]Float" << endl;
		cout << "[5]Double" << endl;
		cout << "[6]Char" << endl;
		cout << "[7]Bool" << endl;
		cout << "[8]String" << endl;
		cout << "[0]�����" << endl;
		cout << endl;
		cout << "[-]�������� ������: ";
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
			cout << "[-]������ Int";
			cout << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << "[" << i + 1 << "] int: " << num1[i] << endl;
			}
			break;
		case 2:
			cout << "[-]������ Short";
			cout << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << "[" << i + 1 << "] short: " << num2[i] << endl;
			}
			break;
		case 3:
			cout << "[-]������ Long";
			cout << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << "[" << i + 1 << "] long: " << num3[i] << endl;
			}
			break;
		case 4:
			cout << "[-]������ Float";
			cout << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << "[" << i + 1 << "] float: " << num4[i] << endl;
			}
			break;
		case 5:
			cout << "[-]������ Double";
			cout << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << "[" << i + 1 << "] double: " << num5[i] << endl;
			}
			break;
		case 6:
			cout << "[-]������ Char";
			cout << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << "[" << i + 1 << "] char: " << num6[i] << endl;
			}
			break;
		case 7:
			cout << "[-]������ Bool";
			cout << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << "[" << i + 1 << "] bool: " << num7[i] << endl;
			}
			break;
		case 8:
			cout << "[-]������ String";
			cout << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << "[" << i + 1 << "] string: " << num8[i] << endl;
			}
			break;
		case 0:
			cout << "[-]�� ����� �� ���������" << endl;
			return 0;
			break;
		default:
			cout << "[-]�� ����� �� ������ ��������";
			cout << endl;
			break;
		}
		cout << endl;
		cout << "[-]����� ��������� � ���� ������� 1 ��� ����� ������, ����� ����� �� ���������: ";
		cin >> start;
		Clear;
	} while (start == 1);
	cout << "[-]�� ����� �� ���������" << endl;
	return 0;
}