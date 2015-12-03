#include<iostream>
using namespace std;

void swap(int *pa, int *pb) {
	int t = *pa;
	*pa = *pb;
	*pb = t;
}

void reverse(int *A, int n) {
	for (int i = 0, j = n - 1; i < j; ++i, --j) {
		swap(&A[i], &A[j]);
	}
}

int main () {
	int n, m;
	int A[100];
	cout << "输入n:";
	cin >> n;
	cout << "输入m:";
	cin >> m;

	for (int i = 0; i < n; ++i)
		cin >> A[i];

	reverse(A, n - m);
	reverse(A + n - m, m);
	reverse(A, n);

	for (int i = 0; i < n; ++i)
		cout << A[i] << ' ';
	cout << endl;
	return 0;
}