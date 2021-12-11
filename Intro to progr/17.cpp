#include <iostream>
#include <math.h>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    //программа 1
    int M1[999999];
    int N, K, L, S = 0;
    double a = 0;
    cout << "Введите целое положительное число N: " << endl;
    cin >> N;
    while (N <= 0)
    {
        cout << "Введите целое положительное число N: " << endl;
        cin >> N;
    }
    cout << "Введите целое положительное число K (K <= N): " << endl;
    cin >> K;
    while (K > N || K < 1)
    {
        cout << "Введите целое положительное К, такое что К <= N: " << endl;
        cin >> K;
    }
    cout << "Введите целое положительное число L (K <= L <= N): " << endl;
    cin >> L;
    while (L < 1 || L < K || L > N)
    {
        cout << "Введите целое положительное число L (K <= L <= N): " << endl;
        cin >> L;
    }
    for (int i = 0; i < N; i++)
    {
        M1[i] = i + 1;
    }
    for (int i = (K - 1); i < L; i++)
    {
        S += M1[i];
        a += 1;
    }
    S = S/a;
    cout << "Среднее арифметическое чисел из искомого диапазона равно " << S << endl << endl;

    //программа 2
    cout << "Введите целое положительное число N: " << endl;
    cin >> N;
    while (N <= 0)
    {
        cout << "Введите целое положительное число N: " << endl;
        cin >> N;
    }
    double x;
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        M1[i] = x;
    }
    cout << endl;
    for (int i = 1; i < N; i++)
    {
        if (i == 1)
        {
            a = M1[1] - M1[0];
        }
        else if (M1[i] - M1[i - 1] != a)
        {
            a = 0;
            cout << "Числа искомой последовательности не образуют арифметическую прогрессию " << endl;
            break;
        }
    }
    cout << "Делитель арифметической прогрессии равен " << a << endl << endl;

    //программа 3
    cout << "Введите целое положительное число N: " << endl;
    cin >> N;
    while (N <= 0)
    {
        cout << "Введите целое положительное число N: " << endl;
        cin >> N;
    }
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        M1[i] = x;
    }
    cout << endl;
    a = M1[1];
    for (int i = 1; i < N; i += 2)
    {
        if (M1[i] < a)
        {
            a = M1[i];
        }
    }
    cout << "Наименьший элемент массива с четным номером равен " << a << endl << endl;

    //программа 4
    cout << "Введите целое положительное число N: " << endl;
    cin >> N;
    while (N <= 0)
    {
        cout << "Введите целое положительное число N: " << endl;
        cin >> N;
    }
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        M1[i] = x;
    }
    cout << endl;
    for (int i = N - 2; i >= 0; i--)
    {
        if (M1[i] > M1[i + 1] & M1[i] > M1[i - 1])
        {
            cout << "Последний локальный максимум искомого массива равен " << M1[i] << endl << endl;
            break;
        }
    }

    //программа 5
    cout << "Введите целое положительное число N: " << endl;
    cin >> N;
    while (N <= 0)
    {
        cout << "Введите целое положительное число N: " << endl;
        cin >> N;
    }
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        M1[i] = x;
    }
    cout << endl;
    for (int i = 0; i < (N - 1); i++)
    {
        for (int j = 1; j < N; j++)
        {
            if (M1[i] == M1[j] & j < i)
            {
                cout << "Номера равных элементов равны " << (j + 1) << " и " << (i + 1) << endl << endl;
                break;
            }
        }
    }
    return 0;
}