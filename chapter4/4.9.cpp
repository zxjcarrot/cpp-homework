#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//园的面积, 输入圆的半径 
double area(double r) {
	const double PI = 3.1415926;
	return 	PI * r * r;
}

//长方形面积, 输入长和宽 
double area(double l, double w) {
	return l * w;
}

//三角形面积, 输入三条边长 
double area(double a, double b, double c) {
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
	char line[10];
	double a, b, c;
	
	cout << setiosflags(ios::fixed) << setprecision(2);

	while (cin >> line) {
		if (line[0] == '0')
			break;

		switch(line[0]) {
			case 'c':
				cin >> a;
				cout << area(a) << endl;
			break;
			case 'r':
				cin >> a >> b;
				cout << area(a, b) << endl;
			break;
			case 't':
				cin >> a >> b >> c;
				cout << area(a, b, c) << endl;
			break;

		}
	}
	return 0;
}