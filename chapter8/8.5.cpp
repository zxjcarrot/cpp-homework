#include <iostream>
#include <cmath>
using namespace std;

class StudentInfo {
public:
	void print() {
		cout << name << "的语文成绩是：" << cs << ",数学成绩是:" << ms << ",英语成绩是：" << es << ",平均分是：" << (cs + ms + es) / 3 << endl;
	}
	
	void average(string name, float cs, float ms, float es) {
		this->name = name;
		this->cs= cs;
		this->ms = ms;
		this->es= es;
		print();
	}
private:
	string name;
	float cs, ms, es;
};

int main () {
	StudentInfo stu;
  	stu.average("张三",75.5f,80.0f,91.5f);
  	stu.average("李四",85.5f,60.5f,80.0f);
  	stu.average("王五",65.5f,90.5f,77.0f);

	return 0;
}