#include <iostream>
using namespace std;

int main () {
    //初始化第一行为{1, 0, ...}
	int A[11][11] = {{1}};
	for (int i = 1; i <= 10; ++i) {
        //第一列全部置为0
        A[i][0] = 0;
		for (int j = 1; j <= i; ++j) {
            // A[i][j] = [前一行i - 1, 第j列] + [前一行i - 1, 第j - 1列]
			A[i][j] = A[i - 1][j] + A[i - 1][j - 1];
			cout << A[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}