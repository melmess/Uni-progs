#include <iostream>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    float A1, B1, C1, A2, B2, C2, x, y;
    cout << "Введите коэффициенты для первого уравнения по порядку (A * x + B * y = C): " << endl;
    cin >> A1 >> B1 >> C1;
    cout << "Введите коэффициенты для второго уравнения по порядку (A * x + B * y = C): " << endl;
    cin >> A2 >> B2 >> C2;
    if ((A1 * B2 - B1 * A2) != 0)
    {
        y = (C2 * A1 - A2 * C1) / (A1 * B2 - B1 * A2);
        if (A1 != 0)
        {
            x = (C1 - B1 * y) / A1;
        }
        else
        {
            x = (C2 - B2 * y) / A2;
        }
    }
    else
    {
        y = (C1 * A2 - C2 * A1) / (B1 * A2 - A1 * B2);
        if (A2 != 0)
        {
            x = (C2 - B2 * y) / A2;
        }
        else
        {
            x = (C1 - B1 * y) / A1;
        }
    }
    cout << "Первый корень системы равен " << x << "\nВторой корень системы равен " << y << endl;
    return 0;
}