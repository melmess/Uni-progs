#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "rus");
    float x, y;
    cout << "Введите величину угла в радианах: " << endl;
    cin >> x;
    while (x < 0)
    {
        cout << "Введите положительную величину угла: " << endl;
        cin >> x;
    }
    while (x > (2 * 3.14))
    {
        cout << "Введите величину угла меньше 2 пи радиан: " << endl;
        cin >> x;
    }
    y = (x * 180) / 3.14;
    cout << "Величина угла в градусах равна "<< y << endl;
    return 0;
}