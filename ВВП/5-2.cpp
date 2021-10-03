#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "rus");
    float A, B, C, AC, BC;
    cout << "Введите координаты точки А: " << endl;
    cin >> A;
    cout << "Введите координаты точки B: " << endl;
    cin >> B;
    cout << "Введите координаты точки C: " << endl;
    cin >> C;
    if (C > A)
    {
        AC = C - A;
    }
    else
    {
        AC = A - C;
    }
    if (C > B)
    {
        BC = B - C;
    }
    else
    {
        BC = C - B;

    }
    cout << "Длина AB равна " << AC << endl;
    cout << "Длина ВС равна " << BC << endl;
    cout << "Сумма длин AC и BC равна " << AC + BC << endl;
    return 0;
}