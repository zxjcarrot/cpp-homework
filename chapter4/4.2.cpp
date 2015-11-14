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

void gotbaha(int n) {
	if (n % 2 == 1 || n < 6) {
		cout << "请输入不小于6的偶数" << endl;
	    return;
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
	cout << "输入一个不小于6的偶数:";
	cin >> n;
	gotbaha(n);
	return 0;
}
