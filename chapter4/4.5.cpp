#include <iostream>
using namespace std;


int f(int n) {
	if (n == 2)
		return 1;
	else
		return (f(n + 1) + 1) * 2;
}

int main() {
	cout << "���ӵ�һ��ժ��" << f(1) << "������"<<endl;
	return 0;
}