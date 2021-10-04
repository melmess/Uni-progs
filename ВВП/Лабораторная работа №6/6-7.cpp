#include <iostream>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    float x, y, z;
    cout << "Введите значение переменной: " << endl;
    cin >> x;
    x = x * x * x;
    y = x * x;
    z = y * y * x;
    cout << "Вывод функции " << z << endl;
    return 0;
}