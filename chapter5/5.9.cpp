#include <iostream>
#include <string>
using namespace std;

int main () {
	string line;
	
	while (getline(cin, line), line != "#") {
		int s = 0;
		for (size_t i = 0; i < line.size(); ++i) {
			int weight = 0;
			if (line[i] == ' ') {
				weight = 0;
			} else {
				weight = line[i] - 'A' + 1;
			}
			
			if (i > 0)
				cout << '+';
			cout <<  (i + 1) <<"*" << weight;
			s += (i + 1) * weight;
		}
		
		cout << "=" << s << endl;
	}
	return 0;
}