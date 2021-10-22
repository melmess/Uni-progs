#include <iostream>
#include <math.h>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    float x, y;
    cout << "Введите значение х: " << endl;
    cin >> x;
    y = 3 * (pow(x, 6)) - 6 * (pow(x, 2)) - 7;
    cout << "Выход функции " << y << endl;
    return 0;
}