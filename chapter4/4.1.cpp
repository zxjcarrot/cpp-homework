#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n) {
	int b = sqrt((double)n);
	for (int i = 2; i <= b; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	while (cin >> n) {
		if (n == 0)
			break;
		if (prime(n))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	return 0;
}