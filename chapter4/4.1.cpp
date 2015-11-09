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
	cout << "������һ������:";
	cin >> n;

	if (prime(n))
		cout << n << " ������" << endl;
	else
		cout << n << " ��������" << endl;
	return 0;
}