#include <iostream>
#include <math.h> 

using namespace std;

int main()
{
    int n = 0, a_max = -2147483647, a_abs_max = 0, a_max_index = 0, a_abs_index = 0;
    int* a = new int[n];
    
    cout << "Enter value of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter " << i+1 << " element: ";
        cin >> a[i];
        if (a_abs_max < abs(a[i])) {
            a_abs_max = abs(a[i]);
            a_abs_index = i+1;
        }
        else if (a_max < a[i]) {
            a_max = a[i];
            a_max_index = i+1;
        }
    }

    cout << "Max abs num: " << a_abs_index << '\t' << "Max num: " << a_max_index;
}
