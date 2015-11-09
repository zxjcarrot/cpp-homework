#include <iostream>
using namespace std;


int f(int n) {
	if (n == 2)
		return 1;
	else
		return (f(n + 1) + 1) * 2;
}

int main() {
	cout << "猴子第一天摘了" << f(1) << "个桃子"<<endl;
	return 0;
}