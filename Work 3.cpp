#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    double a, b;
    int c, d;
    char menu;
    cout << "[-]Выберите символ: ";
    cin >> menu;
    system("cls");
    if (menu == '+')
    {
        cout << "[-]Введите первое число: ";
        cin >> a;
        cout << "[-]Введите второе число: ";
        cin >> b;
        cout << "[-]Результат: " << a << " + " << b << " = " << a + b;
    }
    else if (menu == '-')
    {
        cout << "[-]Введите первое число: ";
        cin >> a;
        cout << "[-]Введите второе число: ";
        cin >> b;
        cout << "[-]Результат: " << a << " - " << b << " = " << a - b;
    }
    else if (menu == '*')
    {
        cout << "[-]Введите первое число: ";
        cin >> a;
        cout << "[-]Введите второе число: ";
        cin >> b;
        cout << "[-]Результат: " << a << " * " << b << " = " << a * b;
    }
    else if (menu == '/')
    {
        cout << "[-]Введите первое число: ";
        cin >> a;
        cout << "[-]Введите второе число: ";
        cin >> b;
        if (b == 0) {
            cout << "Ошибка!";
        }
        else {
            cout << "[-]Результат: " << a << " / " << b << " = " << a / b;
        }
    }
    else if (menu == '%')
    {
        cout << "[-]Введите первое число: ";
        cin >> c;
        cout << "[-]Введите второе число: ";
        cin >> d;
        cout << "[-]Результат: " << c << " % " << d << " = " << c % d;
    }
    else
        cout << "[-]Вы ввели не верное значение!";
    return 0;
}