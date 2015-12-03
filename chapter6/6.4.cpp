#include<iostream>
using namespace std;

int Strlen(const char *str) {
	int len = 0;
	while (*str != '\0')
		++len, ++str;
	return len;
}


int main () {
	char line[100];
	cout << "输入字符串:";
	cin.getline(line, 100);
	cout << "字符串长度:" << Strlen(line) << endl;
	return 0;
}