#include <iostream>
#include <cstring>
using namespace std;

int main () {
	const int N = 5;
	char A[N][101];
	char tstr[101];
	cout << "«Î ‰»Î" << N << "∏ˆ◊÷∑˚¥Æ:";

	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}
	
	// √∞≈›≈≈–Ú
	for (int i = 0; i < N; ++i) {
		for (int j =  N - 1; j > i; --j) {
			if (strcmp(A[j], A[j - 1]) < 0) {
				strcpy(tstr, A[j]);
				strcpy(A[j], A[j - 1]);
				strcpy(A[j - 1], tstr);
			}
		}
	}

	cout << "≈≈–Ú∫ÛΩ·π˚:" << endl;
	for (int i = 0; i < N; ++i) {
		cout << A[i] << endl;
	}

	return 0;
}