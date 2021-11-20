#include <iostream>
#include <math.h>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    //программа 1
    int x;
    cout << "Введите размер файла в байтах: " << endl;
    cin >> x;
    while (x <= 0)
    {
        cout << "Введите неотрицательный размер файла: " << endl;
        cin >> x;
    }
    if (x % 1024 == 0)
    {
        x = x / (pow(2, 10));
    }
    else
    {
        x = (x / (pow(2, 10))) + 1;
    }
    cout << "Файл занимает " << x << " полных килобайтов." << endl;

    //программа 2
    int A, B;
    cout << "Введите длину отрезка А (целое число; A > B): " << endl;
    cin >> A;
    while (A <= 0)
    {
        cout << "Введите неотрицательную длину отрезка: " << endl;
        cin >> A;
    }
    cout << "Введите длину отрезка B (целое число; B < A): " << endl;
    cin >> B;
    while (B <= 0)
    {
        cout << "Введите неотрицательную длину отрезка: " << endl;
        cin >> B;
    }
    cout << "Отрезок В полностью помещается на отрезке А " << A / B << " раз (без наложений)." << endl;

    //программа 3
    cout << "Введите длину отрезка А (целое число; A > B): " << endl;
    cin >> A;
    while (A <= 0)
    {
        cout << "Введите неотрицательную длину отрезка: " << endl;
        cin >> A;
    }
    cout << "Введите длину отрезка B (целое число; B < A): " << endl;
    cin >> B;
    while (B <= 0)
    {
        cout << "Введите неотрицательную длину отрезка: " << endl;
        cin >> B;
    }
    cout << "При наложении отрезка В на отрезок А максимально возможное количество раз (без пересечений) длина незанятой части равна " << A % B << endl;

    //программа 4
    int y;
    cout << "Введите целое двузначное число: " << endl;
    cin >> x;
    while ((x >= -9 && x <= 9) || (x <= -100) || (x >= 100))
    {
        cout << "Введите целое двузначное число: " << endl;
        cin >> x;
    }
    x = abs(x);
    y = x % 10;
    x = x / 10;
    cout << "Искомое число после перестановки цифр местами равно " << y << x << endl;

    //программа 5
    cout << "Введите трехзначное целое число: " << endl;
    cin >> x;
    while ((x >= -99 && x <= 99) || (x <= -1000) || (x >= 1000))
    {
        cout << "Введите целое трехзначное число: " << endl;
        cin >> x;
    }
    x = abs(x);
    y = x / 100;
    x = x % 100;
    cout << "Искомое число после перестановки цифр местами равно " << x << y << endl;
    return 0;
}