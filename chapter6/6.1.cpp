#include<iostream>
using namespace std;

void input(int *A) {
	cout << "请输入10个数:";
	for (int i = 0; i < 10; ++i)
		cin >> A[i];
}

void swap(int *pa, int *pb) {
	int t = *pa;
	*pa = *pb;
	*pb = t;
}

void process(int *A) {
	int min_idx = 0, minv = A[0]; 
	for (int i = 1; i < 10; ++i) {
		if (A[i] < minv) {
			minv = A[i];
			min_idx = i;
		}
	}
	swap(&A[0], &A[min_idx]);

	int max_idx = 0, maxv = A[0];
	for (int i = 1; i < 10; ++i) {
		if (A[i] > maxv) {
			maxv = A[i];
			max_idx = i;
		}
	}
	swap(&A[9], &A[max_idx]);
}

void output(int *A) {
	for (int i = 0; i < 10; ++i)
		cout << A[i] << ' ';
	cout << endl;	
}

int main () {
	int A[10];	
	input(A);
	process(A);
	output(A);
	return 0;
}