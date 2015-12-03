#include <iostream>
#include <cmath>
using namespace std;

// n为学生数量, m为课程数 
void func1(int scores[][5], int n, int m) {
	int s = 0;
	for (int i = 0; i < n; ++i)
		s += scores[i][0];
	cout << "第一门课程平均分为" << s / n << endl;
}

// n为学生数量, m为课程数 
void func2(int scores[][5], int n, int m) {
	cout << "两门以上课程不及格的学生学号: ";
	for (int i = 0; i < n; ++i) {
		int c = 0;
		for (int j = 0; j < m; ++j)
			if (scores[i][j] < 60) {
				++c;
			}
			
		if (c >= 2)
			cout <<  i << ' ';
	}
	cout << endl;
}

// n为学生数量, m为课程数 
void func3(int scores[][5], int n, int m) {
	cout << "平均分90以上或者全部成绩85以上的学生学号: ";
	for (int i = 0; i < n; ++i) {
		bool all_above_85 = true;
		int s = 0;
		for (int j = 0; j < m; ++j) {
			++scores[i][j];
			if (scores[i][j] <= 85)
				all_above_85 = false;
		}
		
		if (all_above_85 || s / m > 90)
			cout << i << " ";
	}

	cout << endl;
}

int main () {
	int scores[4][5] = {
		{90, 85, 92, 88, 83},
		{60, 59, 55, 75, 80},
		{95, 93, 92, 91, 88},
		{83, 82, 88, 75, 61}
	};
	func1(scores, 4, 5);
	func2(scores, 4, 5);
	func3(scores, 4, 5);
	return 0;
}