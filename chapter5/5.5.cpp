#include <iostream>
using namespace std;

int main () {
	int i;
	char cipher[100];
	char plaintext[100];
	
	cout << "��������:";
	cin >> cipher;
	
	for (i = 0; cipher[i] != 0; ++i) {
		if (cipher[i] >= 'A' && cipher[i] <= 'Z') {
			plaintext[i] = 26 - (cipher[i] - 65) + 65 - 1;
		} else if (cipher[i] >= 'a' && cipher[i] <= 'z') {
			plaintext[i] = 26 - (cipher[i] - 97) + 97 - 1;
		}
	}
	plaintext[i] = 0;
	
	cout << "����:" << cipher << endl;
	cout << "ԭ��:" << plaintext << endl;
	return 0;
}