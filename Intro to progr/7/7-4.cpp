#include <iostream>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    float V1, V2, S, T;
    cout << "Введите скорость первого автомобиля: " << endl;
    cin >> V1;
    while (V1 < 0)
    {
        cout << "Введите неотрицательную скорость движения первого автомобиля: " << endl;
        cin >> V1;
    }
    cout << "Введите скорость второго автомобиля: " << endl;
    cin >> V2;
    while (V2 < 0)
    {
        cout << "Введите неотрицательную скорость движения второго автомобиля: " << endl;
        cin >> V2;
    }
    cout << "Введите расстояние между автомобилями на момент начала движения: " << endl;
    cin >> S;
    while (S < 0)
    {
        cout << "Введите неотрицательное расстояние между автомобилями: " << endl;
        cin >> S;
    }
    cout << "Введите время движения автомобилей в противоположных друг другу направлениях: " << endl;
    cin >> T;
    while (T < 0)
    {
        cout << "Введите неотрицательное время движения автомобилей: " << endl;
        cin >> T;
    }
    cout << "Расстояние между автомобилями через " << T << " часов движения будет равно " << (V1 + V2) * T + S << endl;
    return 0;
}