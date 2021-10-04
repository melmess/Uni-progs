#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "rus");
    float x, y;
    cout << "Введите значеие х: " << endl;
    cin >> x;
    x = x * x;
    y = x * x;
    y = y * y;
    cout << "Вывод функции " << y << endl;
    return 0;
}