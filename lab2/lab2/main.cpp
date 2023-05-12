#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, E;
    cout << "Enter num: ";
    cin >> x;
    cout << "Enter error value 'E': ";
    cin >> E;

    double a = (2 * x) * (2 * x) / (2.0);
    double sum = a;
    int n = 2;
    double an = a;

    do {
        an *= (-1) * (2 * x) * (2 * x) / ((2 * n - 1) * (2 * n));
        sum += an;
        n++;
    } while (abs(an) > E);

    double control = 2. * pow(sin(x), 2);

    cout << "Sum of rows equals: " << sum << endl;
    cout << "Control formula equals: " << control << endl;

    return 0;
}