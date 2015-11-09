#include <iostream>
#include <cmath>
using namespace std;

bool func(double a, double b, double c){
	if (b * b - 4 * a * c < 0) // ��ʵ�� 
		return false;

	double t = sqrt(b * b - 4 * a * c);
	double x1 = (-b + t) / (2 * a);
	double x2 = (-b - t) / (2 * a);

	if (x1 == x2) {
		cout << "�÷�����һ����: " << x1 << endl;
	} else {
		cout << "�÷�����������: " << x1 << ", " << x2 << endl;
	}

	return true;
}

int main() {
	double a, b, c;
	
	cout << "����a, b, c:";
	cin >> a >> b >> c;
	
	if (func(a, b, c) == false) {
		cout << "�÷�����ʵ��" << endl;
	}
	return 0;
}