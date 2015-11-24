#include <iostream>
using namespace std;

int main () {
	int A[21];
	int n;
	
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> A[i];

	//区间刚开始为[0, n -1], 交换最前面和最后面的两个元素[i, j], 并把区间缩小成[i + 1, j - 1]
	for (int i = 0, j = n - 1; i < j; ++i, --j) {
		int t = A[i];
		A[i] = A[j];
		A[j] = t;
	}

	for (int i = 0; i < n - 1; ++i) {
		cout << A[i] << ' ';
	}
	cout << A[n - 1] << endl;
	return 0;
}