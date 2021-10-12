#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "rus");
    float x, y;
    cout << "Введите величину угла в градусах: " << endl;
    cin >> x;
    while (x < 0)
    {
        cout << "Введите положительную величину угла: " << endl;
        cin >> x;
    }
    while (x > 360)
    {
        cout << "Введите величину угла меньше 360-и градусов: " << endl;
        cin >> x;
    }
    y = (3.14 * x) / 180;
    cout << "Величина угла в радианах равна "<< y << endl;
    return 0;
}