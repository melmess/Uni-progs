#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "rus");
    float a, b;
    cout << "Введите длину прямоугольника: " << endl;
    cin >> a;
    while (a < 0)
    {
        cout << "Введите неотрицательное число: " << endl;
        cin >> a;
    }
    cout << "Введите ширину прямоугольника: " << endl;
    cin >> b;
    while (b < 0)
    {
        cout << "Введите неотрицательное число: " << endl;
        cin >> b;
    }
    float P = 2 * (a + b);
    float S = a * b;
    cout << "Периметр прямоугольника равен " << P << "\nПлощадь прямоугольника равна " << S << endl;
    return 0;
}