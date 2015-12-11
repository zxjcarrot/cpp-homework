#include <iostream>
#include <cmath>
using namespace std;

class MyInt {
public:
	void setValue(int v) {
		value = v;
	}
	
	int getValue() {
		return value;
	}
	
	//是否是7、11或13的倍数
	bool is_multiple_of_7_11_13() {
		return value % 7 == 0 || value % 11 == 0 || value % 13 == 0;
	}
	
	//位数的和是否是奇数
	int digit_sum() {
		int t = value;
		int s = 0;
		while (t) {
			s += t % 10;
			t /= 10;
		}
		
		return s;
	}
	
	//平方值
	int square() {
		return value * value;
	}
	
	//是否是素数 
	bool is_prime() {
		int b = sqrt(value);
		for (int i = 2; i <= b; ++i) {
			if (value % i == 0)
				return false;
		}
		
		return true;
	}
	//是否是完数 
	bool is_perfect() {
		int s = 0;
		int b = sqrt(value);
		for (int i = 2; i <= b; ++i) {
			if (value % i == 0) {
				s += i;
				if (value != i * i) {
					s += value / i;
				}
			}
		}
		
		return 1 + s == value;
	}
	
private:
	int value;
};

int main () {
	const int A[7] = {6, 104, 3773, 13, 121, 77, 3075};
	
	for (int i = 0; i < 7; ++i) {
		MyInt mi;
		
		mi.setValue(A[i]);
		cout << "MyInt: " << A[i] << endl;
		cout << "是否是7、11或13的倍数? " << mi.is_multiple_of_7_11_13() << endl;
		cout << "位数的和是奇数还是偶数? " << (mi.digit_sum() % 2 == 0 ? "偶数" : "奇数") << endl;
		cout << "平方值是多少? " << mi.square() << endl;
		cout << "是否是一个素数? " << mi.is_prime() << endl;
		cout << "是否是一个完数? " << mi.is_perfect() << endl;
		cout << endl;
	}
	return 0;
}