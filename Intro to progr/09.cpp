#include <iostream>
#include <math.h>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");

    //программа 1
    int x;
    cout << "Введите количество секунд, прошедших с начала суток (целое число): " << endl;
    cin >> x;
    while (x <= 0)
    {
        cout << "Введите неотрицательное целое количество секунд: " << endl;
        cin >> x;
    }
    cout << "С последней минуты прошло " << (x % 43200) % 60 << " секунд" << endl;

    //программа 2
    cout << "Введите номер дня в невисокосном году (целое число): " << endl;
    cin >> x;
    while (x <= 0 || x >= 366)
    {
        cout << "Введите номер дня в невисокосном году (положительное целое число): " << endl;
        cin >> x;
    }
    cout << "Порядковый номер искомого дня в неделе равен " << x % 7 << endl;

    //программа 3
    int n;
    cout << "Введите номер дня в невисокосном году (целое число): " << endl;
    cin >> x;
    while (x <= 0 || x >= 366)
    {
        cout << "Введите номер дня в невисокосном году (положительное целое число): " << endl;
        cin >> x;
    }
    cout << "Введите номер дня недели, с которого начинается невисокосный год (Пн - 1, Вт - 2 и т.д.), номер в диапазоне от 1 до 7-и: " << endl;
    cin >> n;
    while (n <= 0 && n >= 8)
    {
        cout << "Введите номер число в диапозоне от 1 до 7 включительно: " << endl;
        cin >> n;
    }
    cout << "Порядковый номер искомого дня в неделе равен " << (x % 7) + n - 1 << endl;

    //программа 4
    int A, B, C, S, a, b;
    cout << "Введите длину прямоугольника (целое положительное число): " << endl;
    cin >> A;
    while (A <= 0)
    {
        cout << "Введите целое положительное число: " << endl;
        cin >> A;
    }
    cout << "Введите ширину прямоугольника (целое положительное число): " << endl;
    cin >> B;
    while (B <= 0)
    {
        cout << "Введите целое положительное число: " << endl;
        cin >> B;
    }
    cout << "Введите длину квадрата (целое положительное число, не превышающее длину и ширину прямоугольника): " << endl;
    cin >> C;
    while (C <= 0 || C > A || C > B)
    {
        cout << "Введите целое положительное число не превышающее длину и ширину прямоугольника: " << endl;
        cin >> C;
    }
    a = B / C;
    b = A / C;
    cout << a * b << " квадратов помещается на прямоугольнике, если квадраты не пересекаются между собой." << endl;
    S = A * B - ((C * C) * a * b);
    cout << "Площадь незаполненной квадратами части прямоугольника равна " << S << endl;

    //программа 5
    cout << "Введите год (нашей эры): " << endl;
    cin >> x;
    while (x <= 0)
    {
        cout << "Введите год, принадлежащий периоду нашей эры: " << endl;
        cin >> x;
    }
    if (x % 100 != 1)
    {
        x = (x / 100) + 1;
    }
    else
    {
        x = (x / 100);
    }
    cout << "Искомый год принадлежит к " << x << " столетию." << endl;
    return 0;
}