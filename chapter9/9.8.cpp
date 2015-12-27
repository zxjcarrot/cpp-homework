#include <iostream>
#include <cstring>

using namespace std;

class   People
{
public:
   	People(): name(NULL), number(1000), age(0) {
        cout << "调用构造函数People()，name is unknow!";
    }

	People(char* n,int num, int a): name(n), number(num), age(a) {
        cout << "调用构造函数People(char*,int,int)，name is " << name << "!" << endl;
    }
	
    People(People& rhs) {
        if (this == &rhs)
            return;
        cout << "调用拷贝构造函数People(People&)，根据" << rhs.name << "进行构造！" << endl;
        name = rhs.name;
        number = rhs.number;
        age = rhs.age;
    }

	~People() {
        cout << "调用析构函数" << name << "!" << endl; 
    }
	
    void   setName(char* n) {
        name = n;
    }

    char*  getName() {
        return name;
    }

	void   setNumber(int num) {
        number = num;
    }

	int    getNumber() {
        return number;
    }

	void  setAge(int  a=25) {
        age = a;
    }

	int   getAge() {
        return age;
    }
private:
	char* name;
	int    number;
	int   age;
};

void fun1(People fp) {
    cout << "这是函数fun1(People)内部！" << endl;
    fp.setName("fp");
    fp.setNumber(1011);
    cout << "fp: id: " << fp.getNumber() << "  ,  name: " << fp.getName() << " ,  age: " << fp.getAge() << endl;
}

int main () {
	People p1,p2("Jerry",1008,18);
	p1.setName("Tom");
	p1.setAge();
	cout << "p1: id: " << p1.getNumber() << "  ,  name: " << p1.getName() << " ,  age: " << p1.getAge() << endl;
	cout << "p2: id: " << p2.getNumber()<< "  ,  name: " << p2.getName() << " ,  age: " << p2.getAge() << endl;
	
	People p3(p1);
	cout << "p3: id: " << p3.getNumber()<< "  ,  name: " << p3.getName() << " ,  age: " << p3.getAge() << endl;

	p3.setName("p3");

	fun1(p3);			//根据测试结果自己编写函数
	
	return 0;
}
