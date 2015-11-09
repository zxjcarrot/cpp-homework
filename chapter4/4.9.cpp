#include <iostream>
#include <cmath>
using namespace std;

//԰�����, ����Բ�İ뾶 
double area(double r) {
	const double PI = 3.1415926;
	return 	PI * r * r;
}

//���������, ���볤�Ϳ� 
double area(double l, double w) {
	return l * w;
}

//���������, ���������߳� 
double area(double a, double b, double c) {
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
	double a, b, c;
	
	cout << "����Բ�İ뾶:";
	cin >> a;
	cout << "Բ�����Ϊ:" << area(a) << endl;
	
	cout << "���볤���εĳ��Ϳ�:";
	cin >> a >> b;
	cout << "�����ε����Ϊ:" << area(a, b) << endl;

	cout << "���������ε�������:";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		cout << "�����ε����Ϊ:" << area(a, b, c) << endl;
	} else {
		cout << "�����޷����������" << endl;
	}
	
	return 0;
}