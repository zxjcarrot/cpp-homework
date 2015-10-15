#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double a, b, c;
    cout << "输入三角形的三条边长(空格区分):";
    cin >> a >> b >> c;
    if (a + b > c || a + c > b || b + c > a) {
        double p = (a + b + c) / 2;
        cout << "三角形面积为:" << sqrt(p * (p - a) * (p - b) * (p - c)) << endl; // 海伦公式
    } else {
        cout << "无法组成三角形" << endl;
    }
    return 0;
}
