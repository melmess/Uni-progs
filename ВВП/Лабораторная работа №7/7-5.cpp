#include <iostream>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    float A, B, x; //уравнение вида A * x + B = 0, где А != 0
    cout << "Введите значение коэффициента А: " << endl;
    cin >> A;
    while (A == 0)
    {
        cout << "Введите ненулевое значение коэффициента А: " << endl;
        cin >> A;
    }
    cout << "Введите значение коэффициента В: " << endl;
    cin >> B;
    x = - (B / A);
    cout << "Корень уравнения с заданными коэффициентами равен " << x << endl;
    return 0;
}