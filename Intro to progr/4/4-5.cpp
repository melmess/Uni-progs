#include <iostream>

using namespace std;

main ()
{
    setlocale (LC_ALL, "rus");
    float a, b;
    cout << "Введите первое число: " << endl;
    cin >> a;
    while (a == 0)
    {
        cout << "Введите неотрицательное значение первого числа: " << endl;
        cin >> a;
    }
    cout << "Введите второе число: " << endl;
    cin >> b;
    while (b == 0)
    {
        cout << "Введите неотрицательное значение второго числа: " << endl;
        cin >> b;
    }
    a = abs(a);
    b = abs(b);
    cout << "Сумма модулей заданных чисел равна " << a + b << endl;
    cout << "Разность модулей заданных чисел равна " << a - b << endl;
    cout << "Произведение модулей заданных чисел равно " << a * b << endl;
    cout << "Частное модулей заданных чисел равно " << a / b << endl;
    return 0;
}