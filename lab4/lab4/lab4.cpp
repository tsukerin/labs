#include <iostream>

int countArray(int x[], int n) {
    int counter = 0;

    for (int i = 0; i < n; i++) {
        if (x[i] % 7 == 0) { counter++; }
    }

    return counter;
}

using namespace std;

int main()
{
    int n = 0;

    cout << "Enter value of elements array A: ";
    cin >> n;
    cout << "Enter elements of array A: \n";

    int* a = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "A[" << i + 1 << "]= ";
        cin >> a[i];
    }

    cout << "Value of elements array A, dividing without remains: " << countArray(a, n) << "\n";
    cout << "Enter value of elements array B: ";
    cin >> n;
    cout << "Enter elements of array B: \n";

    int* b = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "B[" << i + 1 << "]= ";
        cin >> b[i];
    }

    cout << "Value of elements array B, dividing without remains: " << countArray(b, n);

    return 0;
}
