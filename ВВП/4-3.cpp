#include <iostream>

using namespace std;

main()
{
    setlocale (LC_ALL, "rus");
    float a, b;
    cout << "Введите первое число: " << endl;
    cin >> a;
    cout << "Введите второе число: " << endl;
    cin >> b;
    float M = (a + b) / 2;
    cout << "Среднее арифметическое чисел равно " << M << endl;
    return 0;
}