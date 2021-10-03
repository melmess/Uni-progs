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
    cout << "Произведение длин АС и ВС равно " << AC * BC << endl;
    return 0;
}