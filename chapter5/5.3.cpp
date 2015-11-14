#include <iostream>
using namespace std;

int main () {
	int A[10] = {2, 4, 6, 7, 10, 13, 15};
	int n = 7;
	
	for (int i = 0, j = n - 1; i < j; ++i, --j) {
		int t = A[i];
		A[i] = A[j];
		A[j] = t;
	}

	for (int i = 0; i < n; ++i) {
		cout << A[i] << ' ';
	}
	
	cout << endl;
	return 0;
}