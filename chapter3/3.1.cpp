#include <iostream>
using namespace std;

int main () {
    double f;
    cout << "请输入华氏温度:";
    cin >> f;
    cout << "摄氏温度:" << 5 / 9.0 * (f - 32) << endl;
    return 0;
}
