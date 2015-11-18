#include <iostream>
using namespace std;

int square(int n) {
	return n * n;
}

int cube(int n) {
	return n * n * n;
}

int main() {
	int n;
	
	cin >> n;
	
	cout <<  square(n) << " "<< cube(n) << endl;
	return 0;
}