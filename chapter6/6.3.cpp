#include<iostream>
using namespace std;


int main () {
	int A[100];
	int n, i, c = 1,out = 0;
	cout << "输入圈子内人数:";
	cin >> n;

	for (i = 1; i <= n; ++i)
		A[i] = i;
	
	for (i = 1; i <= n && out < n - 1;){
		if (A[i] != 0) { // 还未出圈子 
			if (c == 3) {
				A[i] = 0; // 滚出圈子 
				out++;
			}
			if (++c == 4) { // 下一个数
				c = 1;
			}
		}
		
		if (++i == n + 1) { // 下一个人 
			i = 1;            			
		}
	}

	for (int i = 1; i <= n; ++i) {
		if (A[i] != 0) {
			cout << "最后留下的人排在第" << i << "号" << endl;
		}
	}

	return 0;
}