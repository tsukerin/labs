#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(0, "RUS");
    float a, b, step, y;
    int n = 10;

    cout << "Введите начало отрезка А: ";
    cin >> a;
    cout << "Введите конец отрезка B: ";
    cin >> b;

    step = (b - a) / n * 1.0;

    for (float i = a; i <= b; i = i + step) {
        y = (.1 / 3) * sqrt(fabs(sin(i))) * pow(exp(0.12 * i), 1. / 3.);
        cout << i << "|\t|" << y << endl;
    }
}

