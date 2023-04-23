#include <iostream>
#include <math.h>

using namespace std;

float controlFormula(float x) {
	float result;

	result = 2. * pow(sin(x), 2);

	return result;
}

float rowSum(float x) {
	float sum = 1, e = 0;
	int i = 0;

	cout << "Enter num 'E': ";
	cin >> e;

	while (e < abs(sum)) {

		i++;
		sum *= pow(-1, i + 1) * (pow(2 * x, 2)) / (((2. * i) + 1.) * ((2. * i) + 2.));

	}

	return sum;
}

int main() {
	float x;
	
	cout << "Enter num: ";
	cin >> x;
	cout << "Sum of rows equals: " << rowSum(x) << '\n' << "Control formula equals: " << controlFormula(x);
}