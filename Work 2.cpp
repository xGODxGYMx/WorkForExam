#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "[-]Программа \"Времена года\"" << endl;
    cout << endl;
    cout << "[1]Лето" << endl;
    cout << "[2]Осень" << endl;
    cout << "[3]Зима" << endl;
    cout << "[4]Весна" << endl;
    cout << endl;
    cout << "[-]Введите значение: ";
    int menu;
    cin >> menu;
    system("CLS");
    if (menu == 1)
    {
        cout << "[-]Вы выбрали Лето!";
    }
    else if (menu == 2)
    {
        cout << "[-]Вы выбрали Осень!";
    }
    else if (menu == 3)
    {
        cout << "[-]Вы выбрали Зиму!";
    }
    else if (menu == 4)
    {
        cout << "[-]Вы выбрали Весну!";
    }
    else
    {
        cout << "[-]Вы выбрали не правильное значение!";
    }
    return 0;
}