#include <iostream>
#include <math.h>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    //программа 1
    float cost, x;
    cout << "Введите стоимость одного килограмма конфет: " << endl;
    cin >> cost;
    while (cost <= 0)
    {
        cout << "Введите стоимость одного килограмма конфет (положительное число): " << endl;
        cin >> cost;
    }
    for (x = 0.1; x <= 1; x += 0.1)
    {
        cout << x << " килограмм конфет стоит " << cost * x << endl;
    }

    //программа 2
    int N;
    cout << "Введите N (целое положительное число): " << endl;
    cin >> N;
    while (N <= 0)
    {
        cout << "Введите N (целое положительное число): " << endl;
        cin >> N;
    }
    double a = 1;
    for (int i = 1; i <= N; i++)
    {
        a = a * (1 + (i * 0.1));
    }
    cout << "Произведение " << N << " сомножителей равно " << a << endl;

    //программа 3
    cout << "Введите N (целое положительное число): " << endl;
    cin >> N;
    while (N <= 0)
    {
        cout << "Введите N (целое положительное число): " << endl;
        cin >> N;
    }
    a = 0;
    for (int i = 1; i <= (N * 2 - 1); i += 2)
    {
        a += i;
        cout << a << endl;
    }

    //программа 4
    cout << "Введите N (целое положительное число): " << endl;
    cin >> N;
    while (N <= 0)
    {
        cout << "Введите N (целое положительное число): " << endl;
        cin >> N;
    }
    float A;
    cout << "Введите А (вещественное число): " << endl;
    cin >> A;
    float s = 1, a_pow = 1;
    for (int i = 1; i <= N; i++)
    {
        a_pow *= A;
        s += a_pow;
    }
    cout << "Сумма слагаемых равна " << s << endl;

    //программа 5
    cout << "Введите N (целое положительное число): " << endl;
    cin >> N;
    while (N <= 0)
    {
        cout << "Введите N (целое положительное число): " << endl;
        cin >> N;
    }
    cout << "Введите А (вещественное число): " << endl;
    cin >> A;
    s = 1; a_pow = 1;
    for (int i = 1; i <= N; i++)
    {
        a_pow *= -A;
        s += a_pow;
    }
    cout << "Сумма слагаемых равна " << s;
    return 0;
}