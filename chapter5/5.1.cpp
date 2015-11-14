#include <iostream>
using namespace std;

int main () {
	int s = 0;
	int A[3][3] = {
	{1, 2, 3},
	{4, 5, 6},
	{7, 8, 9}
	};
	
	for (int i = 0; i < 3; ++i)
		s += A[i][i];
		
	cout << "¶Ô½ÇÏßºÍ:" << s << endl;
	return 0;
}