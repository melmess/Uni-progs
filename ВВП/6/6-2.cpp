#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "rus");
    float A, B, C, x;
    cout << "Введите значения переменных А, В и С: " << endl;
    cin >> A >> B >> C;
    x = A;
    A = C;
    C = B;
    B = x;
    cout << "Значение А: " << A << "\nЗначение В: " << B << "\nЗначение С: " << C << endl;
    return 0;
}