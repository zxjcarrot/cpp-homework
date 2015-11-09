#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n) {
	if (n < 2)
		return false;
	int b = sqrt(n);
	for (int i = 2; i <= b; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	
	return true;
}

void godbaha(int n) {
	if (n % 2 || n < 6) {
		cout << "�����벻С��6��ż��" << endl;
	}
	
	for (int i = 2; i <= n / 2; ++i) {
		if (prime(i) && prime(n - i)) {
			cout << n <<" = " << i << " + " << n - i << endl;
			break;
		}
	}
}

int main() {
	int n;
	cout << "����һ����С��6��ż��:";
	cin >> n;
	godbaha(n);
	return 0;
}