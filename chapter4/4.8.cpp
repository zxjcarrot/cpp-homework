#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool func(double a, double b, double c){
	if (b * b - 4 * a * c < 0) // 无实根 
		return false;

	double t = sqrt(b * b - 4 * a * c);
	double x1 = (-b + t) / (2 * a);
	double x2 = (-b - t) / (2 * a);

	if (x1 == x2) {
		cout << x1 << endl;
	} else {
		if (x1 > x2)
			swap(x1, x2);
		cout << x1 << " " << x2 << endl;
	}

	return true;
}

int main() {
	double a, b, c;

	cout << setiosflags(ios::fixed) << setprecision(2);
	while (cin >> a >> b >> c) {
		if (a == 0 && b == 0 && c == 0)
			break;

		if (func(a, b, c) == false) {
			cout << "wrong input" << endl;
		}
	}
	return 0;
}