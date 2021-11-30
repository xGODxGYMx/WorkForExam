#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "[-]Программа \"Переводчик\"" << endl;
    cout << endl;
    cout << "[1]Русские слова" << endl;
    cout << "[2]Английские слова" << endl;
    cout << endl;
    cout << "[3]Выход" << endl;
    int menu;
    cin >> menu;
    system("cls");
    switch (menu)
    {
    case 1:
        cout << "[-]Переводчик \"Список русских слов\"" << endl;
        cout << endl;
        cout << "[1]Клавиатура" << endl;
        cout << "[2]Мышь" << endl;
        cout << "[3]Монитор" << endl;
        cout << "[4]Наушники" << endl;
        cout << "[5]Коврик" << endl;
        cout << "[6]Стол" << endl;
        cout << "[7]Стул" << endl;
        cout << "[8]Компьютер" << endl;
        cout << "[9]Книга" << endl;
        cout << "[10]Игра" << endl;
        cout << "[11]Человек" << endl;
        cout << "[12]Кот" << endl;
        cout << "[13]Кровать" << endl;
        cout << "[14]Дверь" << endl;
        cout << "[15]Шкаф" << endl;
        cout << endl;
        cout << "[-]Выберите номер слова: ";
        cin >> menu;
        system("cls");
        switch (menu)
        {
        case 1:
            cout << "[-]Перевод: Клавиатура - Keyboard";
            break;
        case 2:
            cout << "[-]Перевод: Мышь - Mouse";
            break;
        case 3:
            cout << "[-]Перевод: Монитор - Monitor";
            break;
        case 4:
            cout << "[-]Перевод: Наушники - Headphones";
            break;
        case 5:
            cout << "[-]Перевод: Коврик - Rug";
            break;
        case 6:
            cout << "[-]Перевод: Стол - Table";
            break;
        case 7:
            cout << "[-]Перевод: Стул - Chair";
            break;
        case 8:
            cout << "[-]Перевод: Компьютер - Computer";
            break;
        case 9:
            cout << "[-]Перевод: Книга - Book";
            break;
        case 10:
            cout << "[-]Перевод: Игра - Game";
            break;
        case 11:
            cout << "[-]Перевод: Человек - Human";
            break;
        case 12:
            cout << "[-]Перевод: Кот - Cat";
            break;
        case 13:
            cout << "[-]Перевод: Кровать - Bed";
            break;
        case 14:
            cout << "[-]Перевод: Дверь - Door";
            break;
        case 15:
            cout << "[-]Перевод: Шкаф - Cupboard";
            break;
        default:
            cout << "[-]Вы ввели не верное значение" << endl;
        }
        break;
    case 2:
        cout << "[-]Переводчик \"Список английских слов\"" << endl;
        cout << endl;
        cout << "[1]Keyboard" << endl;
        cout << "[2]Mouse" << endl;
        cout << "[3]Monitor" << endl;
        cout << "[4]Headphones" << endl;
        cout << "[5]Rug" << endl;
        cout << "[6]Table" << endl;
        cout << "[7]Chair" << endl;
        cout << "[8]Computer" << endl;
        cout << "[9]Book" << endl;
        cout << "[10]Game" << endl;
        cout << "[11]Human" << endl;
        cout << "[12]Cat" << endl;
        cout << "[13]Bed" << endl;
        cout << "[14]Door" << endl;
        cout << "[15]Cupboard" << endl;
        cout << endl;
        cout << "[-]Выберите номер слова: ";
        cin >> menu;
        system("cls");
        switch (menu)
        {
        case 1:
            cout << "[-]Перевод: Keyboard - Клавиатура";
            break;
        case 2:
            cout << "[-]Перевод: Mouse - Мышь";
            break;
        case 3:
            cout << "[-]Перевод: Monitor - Монитор";
            break;
        case 4:
            cout << "[-]Перевод: Headphones - Наушники";
            break;
        case 5:
            cout << "[-]Перевод: Rug - Коврик";
            break;
        case 6:
            cout << "[-]Перевод: Table - Стол";
            break;
        case 7:
            cout << "[-]Перевод: Chair - Стул";
            break;
        case 8:
            cout << "[-]Перевод: Computer - Компьютер";
            break;
        case 9:
            cout << "[-]Перевод: Book - Книга";
            break;
        case 10:
            cout << "[-]Перевод: Game - Игра";
            break;
        case 11:
            cout << "[-]Перевод: Human - Человек";
            break;
        case 12:
            cout << "[-]Перевод: Cat - Кот";
            break;
        case 13:
            cout << "[-]Перевод: Bed - Кровать";
            break;
        case 14:
            cout << "[-]Перевод: Door - Дверь";
            break;
        case 15:
            cout << "[-]Перевод: Cupboard - Шкаф";
            break;
        default:
            cout << "[-]Вы ввели не верное значение";
        }
        break;
    case 3:
        cout << "[-]Вы вышли из переводчика";
        return 0;
    default:
        cout << "[-]Вы ввели не верное значение";
    }
    return 0;
}