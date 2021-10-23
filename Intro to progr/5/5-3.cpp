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
    cout << "Введите координаты точки C (точка C расположена между точками А и В): " << endl;
    cin >> C;
    AC = abs(C - A);
    BC = abs(B - C);
    cout << "Произведение длин АС и ВС равно " << AC * BC << endl;
    return 0;
}