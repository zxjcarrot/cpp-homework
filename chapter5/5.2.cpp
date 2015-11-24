#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int A[21];
	int n;
	int v, i = 0;
	bool desc = false;

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> A[i];
	if (n >= 2 && A[0] > A[1]){
		//降序, 先转换成升序
		reverse(A, A + n);
		desc = true;
	}

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

	if (desc) //原来输入是降序,现在是升序的, 转换回降序
		reverse(A, A + n);

	for (i = 0; i < n - 1; ++i) {
		cout << A[i] << ' ';
	}
	cout << A[n - 1] << endl;

	return 0;
}

/*
//另外一种解法
//避免冗余代码和两次逆序
bool less_than_or_equal_to(int a, int b) {
	return a <= b;
}

bool greater_than_or_equal_to(int a, int b) {
	return a >= b;
}

void insert(int A[], int n, int v, bool (*pred)(int a, int b)) {
	int i = 0;
	//寻找合适的插入点i 
	while (i < n && pred(A[i], v)) {
		++i;
	}

	//将从i到结尾元素后移一位 
	for (int j = n; j > i; --j) {
		A[j] = A[j - 1];
	}
	
	//将v插入正确的位置 
	A[i] = v;
}

int main () {
	int A[21];
	int n;
	int v, i = 0;
	bool desc = false;

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> A[i];
	cin >> v;

	if (n >= 2 && A[0] > A[1]){
		//降序, 使用大于或者等于的判断函数
		insert(A, n, v, greater_than_or_equal_to);
	} else {
		//升序, 使用小于或者等于的判断函数
		insert(A, n, v, less_than_or_equal_to);
	}

	//插入进去后, 数组大小增加
	++n;
	for (i = 0; i < n - 1; ++i) {
		cout << A[i] << ' ';
	}
	cout << A[n - 1] << endl;

	return 0;
}
*/