#include <iostream>

using namespace std;

class Student {
public:
	Student(int n, float s): num(n), score(s) {}
	void change(int n, float s)const {
		int *p = const_cast<int*>(&num);
		*p = n;
		float *fp = const_cast<float*>(&s);
		*fp = s;
	}
	void display() const {cout << num << " " << score << endl;}
private:
	int num;
	float score;
};

int main () {
	const Student stud(101, 78.5);
	stud.display();
	stud.change(101, 80.5);
	stud.display();

	return 0;
}
