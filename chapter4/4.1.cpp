#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n) {
	int b = sqrt(n);
	for (int i = 2; i <= b; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cout << "请输入一个整数:";
	cin >> n;

	if (prime(n))
		cout << n << " 是素数" << endl;
	else
		cout << n << " 不是素数" << endl;
	return 0;
}