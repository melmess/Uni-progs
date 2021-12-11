#include <iostream>
#include <math.h>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    int M1[999999];
    int M2[999999];
    int N, a = 0, count = 0, min = 0, max = 0;
    double x;


    
    //программа 1
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
    for (int i = 1; i < N; i++)
    {
        if (M1[a] != M1[i])
        {
            a++;
            M1[a] = M1[i];
        }
    }
    a++;
    cout << "Элементы преобразованного массива: ";
    for (int i = 0; i < a; i++)
    {
        cout << M1[i] << " ";
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
    cout << endl;
    a = 0;
    for (int i = 0; i < N; i++)
    {
        count = 1;
        for (int j = 0; j < N; j++)
        {
            if (M1[i] == M1[j] & i != j)
            {
                count ++;
                a = j;
            }
        }
        if (count == 2)
        {
            for (int j = a; j < N; j++)
            {
                M1[j] = M1[j + 1];
            }
            i --;
            N --;
        }
    }
    cout << "Элементы преобразованного массива: ";
    for (int i = 0; i < N; i++)
    {
        cout << M1[i] << " ";
    }
    cout << "Размер преобразованного массива равен: " << N << endl << endl;



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
    for (int i = 0; i < N; i++)
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
    if (max > min)
    {
        max ++;
    }
    N ++;
    for (int i = (N - 1); i >= min; i--)
    {
        M1[i] = M1[i - 1];
    }
    M1[min] = 0;
    N ++;
    for (int i = (N - 1); i >= max; i--)
    {
        M1[i] = M1[i - 1];
    }
    cout << "Элементы преобразованного массива: ";
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
    cout << endl;
    for (int i = (N - 1); i >= 0; i--)
    {
        if (M1[i] < 0)
        {
            for (int j = N; j > i; j--)
            {
                a = j;
                M1[j] = M1[j - 1];
            }
            M1[a] = 0;
            N++;
        }
    }
    cout << "Элементы преобразованного массива: ";
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
    cout << endl;
    for (int i = (N - 1); i >= 0; i--)
    {
        if (M1[i] > 0)
        {
            for (int j = N; j >= i; j--)
            {
                a = j;
                M1[j] = M1[j - 1];
            }
            M1[a] = 0;
            N++;
        }
    }
    cout << "Элементы преобразованного массива: ";
    for (int i = 0; i < N; i++)
    {
        cout << M1[i] << " ";
    }
    cout << endl << endl;
    return 0;
}