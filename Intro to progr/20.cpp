#include <iostream>
#include <math.h>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    int M1[9999];
    int M2[9999];
    int M3[9999];
    int N, L, x, a = 0;



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
    M2[a] = 1;
    M3[a] = M1[a];
    for (int i = 1; i < N; i++)
    {
        if (M1[i - 1] == M1[i])
        {
            M2[a] ++;
        }
        else
        {
            a++;
            M2[a] = 1;
            M3[a] = M1[i];
        }
    }
    for (int i = 0; i <= a; i++)
    {
        cout << "Элемент " << M3[i] << " встречается в искомом массиве " << M2[i] << " раз" << endl;
    }
    cout << endl << endl << endl;



    //программа 2
    cout << "Введите целое положительное число N: " << endl;
    cin >> N;
    while (N <= 0)
    {
        cout << "Введите целое положительное число N: " << endl;
        cin >> N;
    }
    cout << "Введите целое положительное число L (L < N): " << endl;
    cin >> L;
    while (L <= 0 || L >= N)
    {
        cout << "Введите целое положительное число L (L < N): " << endl;
        cin >> L;
    }
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        M1[i] = x;
    }
    a = 1;
    for (int i = 1; i < N; i++)
    {
    }
    return 0;
}