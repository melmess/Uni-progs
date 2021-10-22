#include <iostream>

using namespace std;

main()
{
    setlocale (LC_ALL, "rus");
    float a, b;
    cout << "Введите первое число: " << endl;
    cin >> a;
    while (a == 0)
    {
        cout << "Введите ненулевое значение первого числа: " << endl;
        cin >> a;
    }
    cout << "Введите второе число: " << endl;
    cin >> b;
    while (b == 0)
    {
        cout << "Введите ненулевое значение второго числа: " << endl;
        cin >> b;
    }
    a = a * a;
    b = b * b;
    cout << "Суума квадратов заданных чисел равна " << a + b << endl;
    cout << "Разность квадратов заданных чисел равна " << a - b << endl;
    cout << "Произведение квадратов заданных чисел равно " << a * b << endl;
    cout << "Частное квадратов заданных чисел равно " << a / b << endl;
    return 0;
}