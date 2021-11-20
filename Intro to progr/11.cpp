#include <iostream>
#include <math.h>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    //программа 1
    int A, B;
    cout << "Введите значение переменной А (целое число): " << endl;
    cin >> A;
    cout << "Введите значение переменной B (целое число): " << endl;
    cin >> B;
    if (A == B)
    {
        cout << "Значения переменных равны, А = 0, В = 0" << endl;
    }
    else if (A > B)
    {
        B = A;
        cout << "A = " << A << ", B = " << B << endl;
    }
    else
    {
        A = B;
        cout << "A = " << A << ", B = " << B << endl;
    }

    //программа 2
    float a, b, c, s;
    cout << "Введите значение переменной А: " << endl;
    cin >> a;
    cout << "Введите значение переменной B: " << endl;
    cin >> b;
    cout << "Введите значение переменной C: " << endl;
    cin >> c;
    if (a > b)
    {
        s = a;
        if (b > c)
        {
            s += b;
        }
        else if (c >= b)
        {
            s += c;
        }
    }
    else if (b >= a)
    {
        s = b;
        if (a > c)
        {
            s += a;
        }
        else if (c >= a)
        {
            s += c;
        }
    }
    cout << "Сумма двух наибольших искомых чисел равна: " << s << endl;

    //программа 3
    float xa, ya, xb, yb, xc, yc;
    cout << "Введите координаты точки А через пробел: " << endl;
    cin >> xa >> ya;
    cout << "Введите координаты точки B через пробел: " << endl;
    cin >> xb >> yb;
    cout << "Введите координаты точки C через пробел: " << endl;
    cin >> xc >> yc;
    b = sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));
    c = sqrt(pow((xc - xa), 2) + pow((yc - ya), 2));
    if (b < c)
    {
        cout << "Точка В расположена ближе к точке А, чем точка С. Расстояние от точки В до точки А равно " << b;
    }
    else if (c < b)
    {
        cout << "Точка C расположена ближе к точке А, чем точка B. Расстояние от точки В до точки А равно " << c;
    }
    else
    {
        cout << "Точки В и С расположены на одинаковом расстоянии от точки А. Расстояние равно " << b;
    }

    //программа 4
    cout << "Введите координаты точки A(x, y) через пробел (x  =/= 0, y =/= 0): " << endl;
    cin >> xa >> ya;
    while (xa == 0)
    {
        cout << "Введите координату х точки А(х, у), не равняющуюся нулю." << endl;
        cin >> xa;
    }
    while (ya == 0)
    {
        cout << "Введите координату y точки А(х, у), не равняющуюся нулю." << endl;
        cin >> ya;
    }
    if (xa > 0)
    {
        if (ya > 0)
        {
            cout << "Искомая точка расположена в I координатной четверти." << endl;
        }
        else
        {
            cout << "Искомая точка расположена в IV координатной четверти." << endl;
        }
    }
    else
    {
        if (ya > 0)
        {
            cout << "Искомая точка расположена в II координатной четверти." << endl;
        }
        else
        {
            cout << "Искомая точка расположена в III координатной четверти." << endl;
        }
    }

    //программа 5
    cout << "Введите целое число: " << endl;
    cin >> A;
    if (A == 0)
    {
        cout << "Нулевое число" << endl;
    }
    else if (A > 0)
    {
        if (A % 2 == 0)
        {
            cout << "Четное положительное число" << endl;
        }
        else
        {
            cout << "Нечетное положительное число" << endl;
        }
    }
    else
    {
        if (A % 2 == 0)
        {
            cout << "Четное отрицательное число" << endl;
        }
        else
        {
            cout << "Нечетное отрицательное число" << endl;
        }
    }
    
    //программа 6
    cout << "Введите целое число в диапазоне от 1 до 999 включительно: " << endl;
    cin >> A;
    while ((A <= 0) || (A >= 1000))
    {
        cout << "Введите целое число в диапазоне от 1 до 999 включительно: " << endl;
        cin >> A;
    }
    if (A % 2 == 0)
        {
            cout << "Четное ";
        }
    else
    {
        cout << "Нечетное ";
    }
    if (A / 10 >= 10)
    {
        cout << "трехзначное число" << endl;
    }
    else if (A / 10 >= 1)
    {
        cout << "двухзначное число" << endl;
    }
    else
    {
        cout << "однозначное число" << endl;
    }
    return 0;
}