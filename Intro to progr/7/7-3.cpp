#include <iostream>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    float A, B, x, y;
    cout << "Введите количество килограмм конфет: " << endl;
    cin >> x;
    while (x <= 0)
    {
        cout << "Введите положительное количество килограмм конфет: " << endl;
        cin >> x;
    }
    cout << "Введите стоимость указанного количества конфет: " << endl;
    cin >> A;
    while (A <= 0)
    {
        cout << "Введите положительную стоимость: " << endl;
        cin >> A;
    }
    cout << "Введите количество число килограмм конфет для подсчета стоимости: " << endl;
    cin >> B;
    while (B <= 0)
    {
        cout << "Введите положительное число килограмм конфет для подсчета стоимости: " << endl;
        cin >> B;
    }
    cout << "Цена одного килограмма конфет равна " << A / x << endl;
    cout << "Стоимость " << B << " килограмм конфет равна " << (A / x) * B << endl;
    return 0;
}