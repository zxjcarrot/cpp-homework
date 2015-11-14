#include <iostream>
#include <cstring>
using namespace std;

int main () {
	int N;
	cin >> N;
	while (N--) {
		const int SIZE = 1001;
		char ns[SIZE];
		char *prev;
		int n;
		cin >> ns;
		
		n = strlen(ns);
		
		prev = &ns[0];
		for (int i = 0; i < n;) {
			int j = i;
			
			while (j < n&& ns[j] == *prev)
				++j;
	
			cout << (&ns[j] - prev) << *prev;
			
			i = j;
			prev = &ns[i];
		}
		cout << endl;
	}
	return 0;
}