#include <iostream>
using namespace std;

void printstar(int n, char c) {
	for (int i = -n / 2; i <= n / 2; ++i) {
		for (int j = 0; j < -i * 2; ++j) {
			cout << ' ';	
		}
		int s = i < 0 ? n + i * 2 : n - i * 2;

		for (int j = 0; j < s; ++j) {
			cout << c;
		}
		
		cout << endl;
	}
}

int main() {
	printstar(7, '*');
	return 0;
}