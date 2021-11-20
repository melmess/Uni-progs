#include <iostream>
#include <math.h>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    //программа 1
    int day, month;
    cout << "Введите день (число в диапазоне от 1 до 31): " << endl;
    cin >> day;
    while ((day < 1) || (day > 31))
    {
        cout << "Введите день (число в диапазоне от 1 до 31): " << endl;
        cin >> day;
    }
    cout << "Введите номер месяца (число в диапазоне от 1 до 12): " << endl;
    cin >> month;
    while ((month < 1) || (month > 12))
    {
        cout << "Введите номер месяца (число в диапазоне от 1 до 12): " << endl;
        cin >> month;
    }
    switch (day)
    {
        case 1:
        cout << "Первое ";
        break;
        case 2:
        cout << "Второе ";
        break;
        case 3:
        cout << "Третье ";
        break;
        case 4:
        cout << "Четвертое ";
        break;
        case 5:
        cout << "Пятое ";
        break;
        case 6:
        cout << "Шестое ";
        break;
        case 7:
        cout << "Седьмое ";
        break;
        case 8:
        cout << "Восьмое ";
        break;
        case 9:
        cout << "Девятое ";
        break;
        case 10:
        cout << "Десятое ";
        break;
        case 11:
        cout << "Одиннадцатое ";
        break;
        case 12:
        cout << "Двенадцатое ";
        break;
        case 13:
        cout << "Тринадцатое ";
        break;
        case 14:
        cout << "Четырнадцатое ";
        break;
        case 15:
        cout << "Пятнадцатое ";
        break;
        case 16:
        cout << "Шестнадцатое ";
        break;
        case 17:
        cout << "Семнадцатое ";
        break;
        case 18:
        cout << "Восемнадцатое ";
        break;
        case 19:
        cout << "Девятнадцатое ";
        break;
        case 20:
        cout << "Двадцатое ";
        break;
        case 21:
        cout << "Двадцать первое ";
        break;
        case 22:
        cout << "Двадцать второе ";
        break;
        case 23:
        cout << "Двадцать третье ";
        break;
        case 24:
        cout << "Двадцать четвертое ";
        break;
        case 25:
        cout << "Двадцать пятое ";
        break;
        case 26:
        cout << "Двадцать шестое ";
        break;
        case 27:
        cout << "Двадцать седьмое ";
        break;
        case 28:
        cout << "Двадцать восьмое ";
        break;
        case 29:
        cout << "Двадцать девятое ";
        break;
        case 30:
        cout << "Тридцатое ";
        break;
        case 31:
        cout << "Тридцать первое ";
        break;
    }
    switch (month)
    {
        case 1:
        cout << "января";
        break;
        case 2:
        cout << "февраля";
        break;
        case 3:
        cout << "марта";
        break;
        case 4:
        cout << "апреля";
        break;
        case 5:
        cout << "мая";
        break;
        case 6:
        cout << "июня";
        break;
        case 7:
        cout << "июля";
        break;
        case 8:
        cout << "августа";
        break;
        case 9:
        cout << "сентября";
        break;
        case 10:
        cout << "октября";
        break;
        case 11:
        cout << "ноября";
        break;
        case 12:
        cout << "декабря";
        break;
    }

    //программа 2
    char C;
    int N;
    cout << "Введите изначальное положение робота (N = север, E = Восток, W = запад, S = юг): " << endl;
    cin >> C;
    cout << "Введите команду (-1 = поворот направо, 0 = движение вперед, 1 = поворот налево): " << endl;
    cin >> N;
    switch (C)
    {
        case 'N':
        switch (N)
        {
            case -1:
            cout << "Робот движется на запад" << endl;
            break;
            case 0:
            cout << "Робот движется на север" << endl;
            break;
            case 1:
            cout << "Робот движется на восток" << endl;
            break;
        }
        break;
        case 'S':
        switch (N)
        {
            case -1:
            cout << "Робот движется на восток" << endl;
            break;
            case 0:
            cout << "Робот движется на юг" << endl;
            break;
            case 1:
            cout << "Робот движется на запад" << endl;
            break;
        }
        break;
        case 'W':
        switch (N)
        {
            case -1:
            cout << "Робот движется на юг" << endl;
            break;
            case 0:
            cout << "Робот движется на запад" << endl;
            break;
            case 1:
            cout << "Робот движется на север" << endl;
            break;
        }
        break;
        case 'E':
        switch (N)
        {
            case -1:
            cout << "Робот движется на север" << endl;
            break;
            case 0:
            cout << "Робот движется на восток" << endl;
            break;
            case 1:
            cout << "Робот движется на юг" << endl;
            break;
        }
        break;
    }

    //программа 3
    int s;
    cout << "Введите количество заданий (число в диапазоне от 10 до 40): " << endl;
    cin >> s;
    while ((s < 10) || (s > 40))
    {
        cout << "Введите количество заданий (число в диапазоне от 10 до 40): " << endl;
        cin >> s;
    }
    if (s / 10 == 1)
    {
        switch (s)
        {
            case 10:
            cout << "Десять учебных заданий" << endl;
            break;
            case 11:
            cout << "Одиннадцать учебных заданий" << endl;
            break;
            case 12:
            cout << "Двенадцать учебных заданий" << endl;
            break;
            case 13:
            cout << "Тринадцать учебных заданий" << endl;
            break;
            case 14:
            cout << "Четырнадцать учебных заданий" << endl;
            break;
            case 15:
            cout << "Пятнадцать учебных заданий" << endl;
            break;
            case 16:
            cout << "Шестнадцать учебных заданий" << endl;
            break;
            case 17:
            cout << "Семнадцать учебных заданий" << endl;
            break;
            case 18:
            cout << "Восемнадцать учебных заданий" << endl;
            break;
            case 19:
            cout << "Девятнадцать учебных заданий" << endl;
            break;
        }
    }
    else
    {
        switch (s / 10)
        {
            case 2:
            cout << "Двадцать ";
            break;
            case 3:
            cout << "Тридцать ";
            break;
            case 4:
            cout << "Сорок ";
            break;
        }
        switch (s % 10)
        {
            case 0:
            cout << "учебных заданий" << endl;
            break;
            case 1:
            cout << "одно учебное задание" << endl;
            break;
            case 2:
            cout << "два учебных задания" << endl;
            break;
            case 3:
            cout << "три учебных задания" << endl;
            break;
            case 4:
            cout << "четыре учебных задания" << endl;
            break;
            case 5:
            cout << "пять учебных заданий" << endl;
            break;
            case 6:
            cout << "шесть учебных заданий" << endl;
            break;
            case 7:
            cout << "семь учебных заданий" << endl;
            break;
            case 8:
            cout << "восемь учебных заданий" << endl;
            break;
            case 9:
            cout << "девять учебных заданий" << endl;
            break;
        }
    }

    //программа 4
    cout << "Введите целое число в диапазоне 100-999: " << endl;
    cin >> s;
    while ((s < 100) || (s > 999))
    {
        cout << "Введите целое число в диапазоне 100-999: " << endl;
        cin >> s;
    }
    switch (s / 100)
    {
        case 1:
        cout << "Сто ";
        break;
        case 2:
        cout << "Двести ";
        break;
        case 3:
        cout << "Триста ";
        break;
        case 4:
        cout << "Четыреста ";
        break;
        case 5:
        cout << "Пятьсот ";
        break;
        case 6:
        cout << "Шестьсот ";
        break;
        case 7:
        cout << "Семьсот ";
        break;
        case 8:
        cout << "Восемьсот ";
        break;
        case 9:
        cout << "Девятьсот ";
        break;
    }
    if ((s / 10) % 10 == 1)
    {
        switch (s % 100)
        {
            case 11:
            cout << "одиннадцать" << endl;
            break;
            case 12:
            cout << "двенадцать" << endl;
            break;
            case 13:
            cout << "тринадцать" << endl;
            break;
            case 14:
            cout << "четырнадцать" << endl;
            break;
            case 15:
            cout << "пятнадцать" << endl;
            break;
            case 16:
            cout << "шестнадцать" << endl;
            break;
            case 17:
            cout << "семнадцать" << endl;
            break;
            case 18:
            cout << "восемнадцать" << endl;
            break;
            case 19:
            cout << "девятнадцать" << endl;
            break;
        }
    }
    else
    {
        switch ((s / 10) % 10)
        {
            case 2:
            cout << "двадцать ";
            break;
            case 3:
            cout << "тридцать ";
            break;
            case 4:
            cout << "сорок ";
            break;
            case 5:
            cout << "пятьдесят ";
            break;
            case 6:
            cout << "шестьдесят ";
            break;
            case 7:
            cout << "семьдесят ";
            break;
            case 8:
            cout << "восемьдесят ";
            break;
            case 9:
            cout << "девяносто ";
            break;
        }
        switch (s % 10)
        {
            case 0:
            break;
            case 1:
            cout << "один" << endl;
            break;
            case 2:
            cout << "два" << endl;
            break;
            case 3:
            cout << "три" << endl;
            break;
            case 4:
            cout << "четыре" << endl;
            break;
            case 5:
            cout << "пять" << endl;
            break;
            case 6:
            cout << "шесть" << endl;
            break;
            case 7:
            cout << "семь" << endl;
            break;
            case 8:
            cout << "восемь" << endl;
            break;
            case 9:
            cout << "девять" << endl;
            break;
        }
    }

    //программа 5
    cout << "Введите год: " << endl;
    cin >> s;
    while (s <= 0)
    {
        cout << "Введите год: " << endl;
        cin >> s;
    }
    cout << "год ";
    switch ((s) % 10)
    {
        case 0:
        case 1:
        cout << "бел";
        break;
        case 2:
        case 3:
        cout << "черн";
        break;
        case 4:
        case 5:
        cout << "зелён";
        break;
        case 6:
        case 7:
        cout << "красн";
        break;
        case 8:
        case 9:
        cout << "жёлт";
        break;
    }
    switch ((s + 8) % 12) {
    case 0:
        cout << "ой крысы";
        break;
    case 1:
        cout << "ой коровы" << endl;
        break;
    case 2:
        cout << "ого тигра" << endl;
        break;
    case 3:
        cout << "ого зайца" << endl;
        break;
    case 4:
        cout << "ого дракона" << endl;
        break;
    case 5:
        cout << "ой змеи" << endl;
        break;
    case 6:
        cout << "ой лошади" << endl;
        break;
    case 7:
        cout << "ой овцы" << endl;
        break;
    case 8:
        cout << "ой обезьяны" << endl;
        break;
    case 9:
        cout << "ой курицы" << endl;
        break;
    case 10:
        cout << "ой собаки" << endl;
        break;
    case 11:
        cout<< "ой свиньи" << endl;
        break;
    }
    return 0;
}