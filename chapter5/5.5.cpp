#include <iostream>
using namespace std;

int main () {
	int i, t;
	char cipher[100];
	char plaintext[100];
	
	cin.getline(cipher, 100);

	for (i = 0; cipher[i] != 0; ++i) {
		if (cipher[i] >= 'A' && cipher[i] <= 'Z') {
			plaintext[i] = (25 - (cipher[i] - 'A')) + 'A';
		} else if (cipher[i] >= 'a' && cipher[i] <= 'z') {
			plaintext[i] = (25 - (cipher[i] - 'a')) + 'a';
		} else {
            plaintext[i] = cipher[i];
        }
	}
	plaintext[i] = 0;

	cout << plaintext << endl;
	return 0;
}
