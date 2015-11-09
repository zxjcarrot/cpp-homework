#include <iostream>
#include <cmath>
using namespace std;

bool func(double a, double b, double c){
	if (b * b - 4 * a * c < 0) // 无实根 
		return false;

	double t = sqrt(b * b - 4 * a * c);
	double x1 = (-b + t) / (2 * a);
	double x2 = (-b - t) / (2 * a);

	if (x1 == x2) {
		cout << "该方程有一个根: " << x1 << endl;
	} else {
		cout << "该方程有两个根: " << x1 << ", " << x2 << endl;
	}

	return true;
}

int main() {
	double a, b, c;
	
	cout << "输入a, b, c:";
	cin >> a >> b >> c;
	
	if (func(a, b, c) == false) {
		cout << "该方程无实根" << endl;
	}
	return 0;
}