#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main () {
	const int N = 100;
	char str[N + 1];
	int n; //�ַ������� 
	string sstr;
	
	cout << "������һ���ַ���:";
	cin >> str;
	
	sstr = str;
	
	
	// char����
	n = strlen(str);
	for (int i = 0, j = n - 1; i < j; ++i, --j) {
		char t = str[i];
		str[i] = str[j];
		str[j] = t;
	
	}
	
	cout << "(char����)�����:";
	cout << str << endl;
	
	
	// string
	
	for (size_t i = 0, j = sstr.size() - 1; i < j; ++i, --j) {
		char t = sstr[i];
		sstr[i] = sstr[j];
		sstr[j] = t;
	}
	
	cout << "(string)�����:";
	cout << str << endl;
	return 0;
}