#include <iostream>
#include <cstring>
using namespace std;

int main () {
	int N;
	cin >> N;
	while (N--) {
		const int SIZE = 1001;
		char ns[SIZE];
		char prev;
		int n;
		cin >> ns;
		
		//计算ns字符串的长度
		n = strlen(ns);

		prev = ns[0];
		for (int i = 0; i < n;) {
			int j = i;

			//统计与prev相同的字母个数
			while (j < n && ns[j] == prev)
				++j;

			// j - i 正好位相同字母的个数
			cout << (j - i) << prev;

			i = j;

			if (j < n) // 做下边界判断, 因为j可能等于n
				prev = ns[i];
		}
		cout << endl;
	}
	return 0;
}