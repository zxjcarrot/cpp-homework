#include <iostream>
#include <cmath>
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
	double a, b, c;
	
	cout << "输入圆的半径:";
	cin >> a;
	cout << "圆的面积为:" << area(a) << endl;
	
	cout << "输入长方形的长和宽:";
	cin >> a >> b;
	cout << "长方形的面积为:" << area(a, b) << endl;

	cout << "输入三角形的三条边:";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		cout << "三角形的面积为:" << area(a, b, c) << endl;
	} else {
		cout << "三边无法组成三角形" << endl;
	}
	
	return 0;
}