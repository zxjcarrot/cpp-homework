#include <iostream>
using namespace std;

int main () {
	int i, t;
	char cipher[100];
	char plaintext[100];
	
	cout << "输入密文:";
	cin >> cipher;
	
	for (i = 0; cipher[i] != 0; ++i) {
		if (cipher[i] >= 'A' && cipher[i] <= 'Z') {
			plaintext[i] = (cipher[i] - 'A' - 1 + 26) % 26 + 'A';
		} else if (cipher[i] >= 'a' && cipher[i] <= 'z') {
			plaintext[i] = (cipher[i] - 'a' - 1 + 26) % 26 + 'a';
		} else {
            plaintext[i] = cipher[i];
        }
	}
	plaintext[i] = 0;
	
	cout << "密文:" << cipher << endl;
	cout << "原文:" << plaintext << endl;
	return 0;
}
