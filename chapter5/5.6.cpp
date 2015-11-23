#include <iostream>
#include <cstring>
using namespace std;

int main () {
	const int N = 5;
	char A[N][101];
	char tstr[101];
	cout << "请输入" << N << "个字符串:";

	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}
	
	// 冒泡排序
	for (int i = 0; i < N; ++i) {
		for (int j =  N - 1; j > i; --j) {
			if (strcmp(A[j], A[j - 1]) < 0) {
				strcpy(tstr, A[j]);
				strcpy(A[j], A[j - 1]);
				strcpy(A[j - 1], tstr);
			}
		}
		//一趟循环下来[i, n -1]中最小的元素已经在[i]上
	}

	cout << "排序后结果:" << endl;
	for (int i = 0; i < N; ++i) {
		cout << A[i] << endl;
	}

	return 0;
}