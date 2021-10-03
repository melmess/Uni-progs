#include <iostream>

using namespace std;

main()
{
    setlocale (LC_ALL, "rus");
    float d;
    cout << "Введите диаметр окружности: " << endl;
    cin >> d;
    while (d < 0)
    {
        cout << "Введите неотррицательный диаметр окружности: " << endl;
        cin >> d;
    }
    float L = 3.14 * d;
    cout << "Длина окружности равна " << L << endl;
    return 0;
}