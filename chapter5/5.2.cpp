#include <iostream>
using namespace std;

int main () {
	int A[10] = {2, 4, 6, 7, 10, 13, 15};
	int n = 7;
	int v, i = 0;
	
	cout << "输入一个数:";
	cin >> v;
	
	//寻找合适的插入点i 
	while (i < n && A[i] <= v) {
		++i;
	}
	
	//将从i到结尾元素后移一位 
	for (int j = n; j > i; --j) {
		A[j] = A[j - 1];
	}
	
	//将v插入正确的位置 
	A[i] = v;
	++n;
	
	for (i = 0; i < n; ++i) {
		cout << A[i] << ' ';
	}
	cout << endl;

	return 0;
}