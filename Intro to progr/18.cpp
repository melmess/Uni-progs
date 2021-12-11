#include <iostream>
#include <math.h>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    int M1[999999];
    int M2[999999];
    int N, min = 0, max = 0;
    double x, a;



    //программа 1
    cout << "Введите целое положительное число N: " << endl;
    cin >> N;
    while (N <= 0)
    {
        cout << "Введите целое положительное число N: " << endl;
        cin >> N;
    }
    cout << "Введите элементы первого массива: " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        M1[i] = x;
    }
    cout << endl;
    cout << "Введите элементы второго массива: " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        M2[i] = x;
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        swap(M1[i], M2[i]);
    }
    cout << "Элементы первого массива: ";
    for (int i = 0; i < N; i++)
    {
        cout << M1[i] << " ";
    }
    cout << "Элементы второго массива: ";
    for (int i = 0; i < N; i++)
    {
        cout << M2[i] << " ";
    }
    cout << endl << endl;



    //программа 2
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
    M2[0] = M1[0]; a = M1[0];
    for (int i = 1; i < N; i++)
    {
        a += M1[i];
        M2[i] = a / (i + 1);
    }
    cout << "Элементы преобразованного массива равны: ";
    for (int i = 0; i < N; i++)
    {
        cout << M2[i] << " ";
    }
    cout << endl << endl;



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
    for (int i = (N - 1); i >= 0; i--)
    {
        if (M1[i] % 2 == 1)
        {
            for (int j = (i - 1); j >= 0; j--)
            {
                if (M1[j] % 2 == 1)
                {
                    M1[i] += M1[j];
                    break;
                }
            }
        }
    }
    cout << "Элементы преобразованного массива равны: ";
    for (int i = 0; i < N; i++)
    {
        cout << M1[i] << " ";
    }
    cout << endl << endl;



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
    for (int i = (N - 1); i >= 0; i--)
    {
        if (M1[i] < M1[min])
        {
            min = i;
        }
        if (M1[i] > M1[max])
        {
            max = i;
        }
    }
    //а - индекс минимума, х - индекс максимума
    if (max < min)
    {
        for (int i = max; i <= min; i++)
        {
            M1[i] = 0;
        }
    }
    if (max > min)
    {
        for (int i = min; i <= max; i++)
        {
            M1[i] = 0;
        }
    }
    cout << "Преобразованный массив: ";
    for (int i = 0; i < N; i++)
    {
        cout << M1[i] << " ";
    }
    cout << endl << endl;



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
    for (int i = 1; i < N; i++)
    {
        if (M1[i - 1] > M1[i])
        {
            swap(M1[i - 1], M1[i]);
        }
        else break;
    }
    cout << "Преобразованный массив: ";
    for (int i = 0; i < N; i++)
    {
        cout << M1[i] << " ";
    }
    return 0;
}