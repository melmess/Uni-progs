#include <iostream>
#include <math.h>

using namespace std;

main()
{
    setlocale(LC_ALL, "rus");
    float x1, x2, y1, y2, x, y;
    cout << "Введите координаты первой точки: " << endl;
    cin >> x1 >> y1;
    cout << "Введите кооридинаты второй точки: " << endl;
    cin >> x2 >> y2;
    if (x1 > x2)
    {
        x = x1 - x2;
    }
    else
    {
        x = x2 - x1;
    }
    if (y1 > y2)
    {
        y = y1 - y2;
    }
    else
    {
        y = y2 - y1;
    }
    float length = sqrt(x * x + y * y);
    cout << "Длина отрезка АВ равна " << length << endl;
    return 0;
}