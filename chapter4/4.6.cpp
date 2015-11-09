#include <iostream>
using namespace std;

int square(int n) {
	return n * n;
}

int cube(int n) {
	return n * n * n;
}

int main() {
	int n;
	
	cout << "输入n:";
	cin >> n;
	
	cout << "square(" << n << ") = " << square(n) << endl;
	cout << "cube(" << n << ") = " << cube(n) << endl;
	return 0;
}