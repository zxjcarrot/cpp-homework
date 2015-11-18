#include <iostream>
using namespace std;


int f(int n) {
	if (n == 1)
		return 1;
	else
		return f(n - 1) + n * n;
}

int main() {
	int x;
	
	while (cin >> x) {
		if (x == 0)
			break;
		cout << f(x) << endl;
	}

	return 0;
}