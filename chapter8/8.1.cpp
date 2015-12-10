#include <iostream>
using namespace std;

class RectangleBlock {
public:
	void input() {
		cin >> length >> width >> height;
	}
	
	int volume() {
		return length * width * height;
	}
	
	void output () {
		cout << volume() << endl;
	}
private:
	int length, width, height;
};

int main () {
	RectangleBlock rb1, rb2, rb3;
	cout << "输入三个长方体的长宽高:" << endl;
	rb1.input();
	rb2.input();
	rb3.input();
	cout << "三个长方体的体积分别为:" << endl;
	rb1.output();
	rb2.output();
	rb3.output();

	return 0;
}