#include <iostream>
using namespace std;

int main () {
	int A[10] = {2, 4, 6, 7, 10, 13, 15};
	int n = 7;
	int v, i = 0;
	
	cout << "����һ����:";
	cin >> v;
	
	//Ѱ�Һ��ʵĲ����i 
	while (i < n && A[i] <= v) {
		++i;
	}
	
	//����i����βԪ�غ���һλ 
	for (int j = n; j > i; --j) {
		A[j] = A[j - 1];
	}
	
	//��v������ȷ��λ�� 
	A[i] = v;
	++n;
	
	for (i = 0; i < n; ++i) {
		cout << A[i] << ' ';
	}
	cout << endl;

	return 0;
}