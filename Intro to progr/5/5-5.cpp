#include <iostream>
#include <math.h>

using namespace std;

main()
{
    setlocale(LC_ALL, "rus");
    float x1, x2, x3, y1, y2, y3, a1, b1, a2, b2, a3, b3;
    cout << "Введите координаты первой вершины треугольника: " << endl;
    cin >> x1 >> y1;
    cout << "Введите координаты второй вершины треугольника: " << endl;
    cin >> x2 >> y2;
    cout << "Введите координаты третьей вершины треугольника: " << endl;
    cin >> x3 >> y3;
    //подсчет длины первой стороны треугольлника
    a1 = abs(x1 - x2);
    b1 = abs(y1 - y2);
    float len1 = sqrt(a1 * a1 + b1 * b1);
    //подсчет длины второй стороны треугольника
    a2 = abs(x2 - x3);
    b2 = abs(y3 - y3);
    float len2 = sqrt(a2 * a2+ b2 * b2);
    //подсчет длины третьей стороны треугольника
    a3 = abs(x1 - x3);
    b3 = abs(y1 - y3);
    float len3 = sqrt(a3 * a3 + b3 * b3);
    //подсчет периметра
    float P = len1 + len2 + len3;
    cout << "Периметр треугольника равен " << P << endl;
    //подсчет площади
    float p, S;
    p = P / 2;
    S = sqrt(p * (p - len1) * (p - len2) * (p - len3));
    cout << "Площадь треугольника равна " << S << endl;
    return 0;
}