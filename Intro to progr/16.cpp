#include <iostream>
#include <math.h>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    //программа 1
    int M1[999999];
    int N;
    cout << "Введите положительное число N: " << endl;
    cin >> N;
    while (N <= 0)
    {
        cout << "Введите положительное число N: " << endl;
        cin >> N;
    }
    for (int i = 0; i < N; i++)
    {
        M1[i] = 1 + i*2;
    }
    cout << "Первые " << N << " нечетных чисел: " << endl;
    for (int i = 0; i < N; ++i)
    {
        cout << M1[i] << " ";
    }
    cout << endl << endl;

    //программа 2
    double a, d;
    cout << "Введите положительное число N (N > 1): " << endl;
    cin >> N;
    while (N <= 1)
    {
        cout << "Введите положительное число N (N > 1): " << endl;
        cin >> N;
    }
    cout << "Введите первый член геометрической прогрессии: " << endl;
    cin >> a;
    cout << "Введите знаменатель геометрической прогрессии: " << endl;
    cin >> d;
    M1[0] = a;
    for (int i = 1; i < N; i++)
    {
        M1[i] = a * pow(d, i);
    }
    cout << "Первые " << N << " членов искомой геометрической прогрессии: " << endl;
    for (int i = 0; i < N; ++i)
    {
        cout << M1[i] << " ";
    }
    cout << endl << endl;

    //программа 3
    cout << "Введите положительное число N (N > 2): " << endl;
    cin >> N;
    while (N <= 2)
    {
        cout << "Введите положительное число N (N > 2): " << endl;
        cin >> N;
    }
    int A, B;
    cout << "Введите целое число А: " << endl;
    cin >> A;
    cout << "Введите целое число B: " << endl;
    cin >> B;
    M1[0] = A; M1[1] = B;
    for (int i = 2; i < N; i++)
    {
        M1[i] = M1[i-2] + M1[i - 1];
    }
    cout << "Первые " << N << " членов искомой последовательности: " << endl;
    for (int i = 0; i < N; ++i)
    {
        cout << M1[i] << " ";
    }
    cout << endl << endl;

    //программа 4
    cout << "Введите размер массива (целое положительное число): " << endl;
    cin >> N;
    while (N <= 0)
    {
        cout << "Введите целое положительное число: " << endl;
        cin >> N;
    }
    for (int i = 0; i < N; i++)
    {
        M1[i] = 1 + i;
    }
    cout << "Элементы массива в заданном порядке: " << endl;
    for (int i = 0; i < N/2; i++)
    {
        cout << M1[i] << " " << M1[N - 1 - i] << " ";
    }
    if ((N / 2 + 1) == 0)
    {
        cout << M1[N/2];
    }
    cout << endl << endl;

    //программа 5
    cout << "Введите размер массива (целое положительное число): " << endl;
    cin >> N;
    while (N <= 0)
    {
        cout << "Введите целое положительное число: " << endl;
        cin >> N;
    }
    for (int i = 0; i < N; i++)
    {
        M1[i] = 1 + i;
    }
    cout << "Элементы с нечетными номерами в порядке возрастания: " << endl;
    for (int i = 0; i < N; i ++)
    {
        if ((i % 2) == 0)
        {
            cout << M1[i] << " ";
        }
    }
    cout << endl;
    cout << "Элементы с четными номерами в порядке убывания: " << endl;
    for (int i = (N - 1); i < N; i --)
    {
        if ((i % 2) == 1)
        {
            cout << M1[i] << " ";
        }
    }
    return 0;
}