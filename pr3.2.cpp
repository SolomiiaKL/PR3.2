// Lab_03_2.cpp
// < Клак Соломія >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 14
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, a, b, c;
    double F1 = 0, F2 = 0;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

    // 1. Скорочена форма розгалуження
    if (x + c < 0 && a != 0)
    {
        F1 = -a * x * x - b;
    }
    if (x + c > 0 && a == 0)
    {
        F1 = (x - a) / (x - c);
    }
    if (!(x + c < 0 && a != 0) && !(x + c > 0 && a == 0))
    {
        F1 = (x / c) + (c / x);
    }

    // 2. Повна форма розгалуження (з використанням else if)
    if (x + c < 0 && a != 0)
    {
        F2 = -a * x * x - b;
    }
    else if (x + c > 0 && a == 0)
    {
        F2 = (x - a) / (x - c);
    }
    else
    {
        F2 = (x / c) + (c / x);
    }

    cout << endl;
    cout << "1) F (skorochena) = " << F1 << endl;
    cout << "2) F (povna)      = " << F2 << endl;

    return 0;
}