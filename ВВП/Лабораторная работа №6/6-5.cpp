#include <iostream>
#include <math.h>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    float x, y;
    cout << "Введите значение х: " << endl;
    cin >> x;
    y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
    cout << "Вывод функции " << y << endl;
    return 0;
}