#include <iostream>

using namespace std;

class Cdateinfo {
public:
    Cdateinfo():year(2000), month(1), day(1) {
        cout << "调用无参数的构造函数！" << endl;
    }

    Cdateinfo(int y, int m, int d): year(y), month(m), day(d) {
        cout << "调用带参数的构造函数！" << endl;
    }
    
    void setDate(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }

    void show() {
        cout << "当前时间是" << year << "年" << month << "月" << day << "日！" << endl;  
    }
private:
    int year;
    int month;
    int day;
};

int main () {
    Cdateinfo cd1,cd2(2011,4,18);
    cd1.setDate(2012,12,23);
    cd1.show();
    cd2.show();

    return 0;
}
