#include<iostream>
using namespace std;

void swap(char **p1, char **p2) {
	char *t = *p1;
    *p1 = *p2;
    *p2 = t;
}

void bubble_sort(char *A[], int n) {
	for (int i = 0; i < n - 1; ++i) {
		for (int j = n - 1; j > i; --j) {
			if (strcmp(A[j], A[j -1]) < 0) {
				swap(&A[j], &A[j - 1]);
			}
		}
	}
}

int main () {
	char A[10][100];
	char *pA[10];
	
	cout << "输入10个字符串:";
	for (int i = 0; i < 10; ++i) {
		cin >> A[i];
		pA[i] = A[i];
	}
	
	bubble_sort(pA, 10);
	
	for (int i = 0; i < 10; ++i) {
		cout << pA[i] << endl;
	}

	return 0;
}
