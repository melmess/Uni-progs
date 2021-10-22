#include <iostream>
#include <math.h>

using namespace std;

main()
{
    setlocale(LC_ALL, "rus");
    float x1, y1, x2, y2, a, b;
    cout << "Введите координаты первой вершины: " << endl;
    cin >> x1 >> y1;
    cout << "Введите координаты второй вершины: " << endl;
    cin >> x2 >> y2;
    a = abs(x1 - x2);
    b = abs(y1 - y2);
    cout << "Периметр прямоугольника с заданными вершинами равен " << 2 * (a + b) << endl;
    cout << "Площадь прямоугольника с заданными вершинанми равна " << a * b << endl;
    return 0;
}