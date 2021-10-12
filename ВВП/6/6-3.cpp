#include <iostream>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    float A, B, C, x;
    cout << "Введите значения переменных А, В и С: " << endl;
    cin >> A >> B >> C;
    x = C;
    C = A;
    A = B;
    B = x;
    cout << "Значение переменной А " << A << "\nЗначение переменной В " << B << "\nЗначение переменной С " << C << endl;
    return 0;
}