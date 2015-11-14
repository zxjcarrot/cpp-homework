#include <iostream>
#include <string>
using namespace std;

int main () {
	int N, caseno = 0;
	cin >> N;
	
	while (caseno++ < N) {
		string s;
		cin >> s;
		cout << "String #" << caseno << endl;
		for (size_t i = 0; i < s.size(); ++i) {
			cout << (char)(((s[i] - 65) + 1) % 26 + 65);			
		}
		cout << endl;
	}
	return 0;
}