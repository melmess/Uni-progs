#include <iostream>
#include <math.h>

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
    AC = abs(A - C);
    BC = abs(B - C);
    cout << "Длина AC равна " << AC << endl;
    cout << "Длина ВС равна " << BC << endl;
    cout << "Сумма длин AC и BC равна " << AC + BC << endl;
    return 0;
}