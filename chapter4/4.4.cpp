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
	
	cout << "������x:";
	cin >> x;
	
	cout << "f(" << x << ") = " << f(x) << endl;
	return 0;
}