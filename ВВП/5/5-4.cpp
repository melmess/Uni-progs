#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "rus");
    float x1, y1, x2, y2, a, b;
    cout << "Введите координаты первой вершины: " << endl;
    cin >> x1 >> y1;
    cout << "Введите координаты второй вершины: " << endl;
    cin >> x2 >> y2;
    if (x1 > x2)
    {
        a = x1 - x2;
    }
    else
    {
        a = x2 - x1;
    }
    if (y1 > y2)
    {
        b = y1 - y2;
    }
    else
    {
        b = y2 - y2;
    }
    cout << "Периметр прямоугольника с заданными вершинами равен " << 2 * (a + b) << endl;
    cout << "Площадь прямоугольника с заданными вершинанми равна " << a * b << endl;
    return 0;
}