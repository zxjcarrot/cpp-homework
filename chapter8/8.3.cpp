#include <iostream>
using namespace std;

class Counter {
public:
	Counter() {
		count = 0;
		maxValue = 0;
	}

	void increment() {
		if (++count > maxValue) {
			cout << "超出最大值" << endl;
		}
	}
	
	void decrement() {
		if (--count < 0) {
			cout << "负数" << endl;
		}
	}
	
	void setCount(int c) {
		count = c;
	}
	
	void setMaxValue(int mv) {
		maxValue = mv;
	}
	
	int getCount() {
		return count;
	}
	
	int getMaxValue() {
		return maxValue;
	}
	
private: 
	int count;
	int maxValue;
};

int main () {
	Counter c;
	c.setCount(0);
	c.setMaxValue(10);
	for (int i = 0; i < 11; ++i)
		c.increment();
	cout << "count: " << c.getCount() << endl;
	cout << "maxValue: " << c.getMaxValue() << endl;
	for (int i = 0; i < 12; ++i)
		c.decrement();
	cout << "count: " << c.getCount() << endl;
	cout << "maxValue: " << c.getMaxValue() << endl;
	return 0;
}