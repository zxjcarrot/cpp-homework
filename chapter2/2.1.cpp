#include <iostream>
using namespace std;
const double PI = 3.1415926;

int main () {
    double radius;
    cout << "输入圆半径:";
    cin >> radius;
    cout << "圆面积:" << (PI * radius * radius) << endl;
    cout << "圆周长:" << (2 * PI * radius) << endl;
    return 0;
}
