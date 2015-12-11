#include <iostream>
using namespace std;

class Tree {
public:
	Tree() {
		ages = 0;	
	}
	void grow(int years) {
		ages += years;
	}
	
	void show() {
		cout << "树龄:" << ages << endl;
	}
private:
	int ages;
};

int main () {
	Tree t1;
	t1.grow(11);
	t1.show();
	t1.grow(2);
	t1.show();
	return 0;
}