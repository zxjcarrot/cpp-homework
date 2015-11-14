#include <iostream>
using namespace std;

int main () {
	int A[11][11] = {{1}};
	for (int i = 1; i <= 10; ++i) {
		for (int j = 1; j <= i; ++j) {
			A[i][j] = A[i - 1][j] + A[i - 1][j - 1];
			cout << A[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}