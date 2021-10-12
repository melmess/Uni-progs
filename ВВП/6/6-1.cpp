#include <iostream>

using namespace std;

main ()
{
    setlocale(LC_ALL, "rus");
    float A, B, x;
    cout << "Введите значения А и В: " << endl;
    cin >> A >> B;
    x = B;
    B = A;
    A = x;
    cout << "Значение A равно " << A << "\nЗначеие В равно " << B << endl;
    return 0;
}