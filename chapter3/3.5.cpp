#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n;
    int digits = 0;
    int t;
    cout << "输入一个不多于5位的正整数:";
    cin >> n;

    //计算位数
    t = n;
    while (t) {
        t /= 10;
        ++digits;
    }
    cout << "位数:" << digits << "位" << endl;

    //打印各个位上的数
    cout << "各个位上的数:";
    int tens = pow(10, digits - 1);

    while (tens != 0) {
        cout << (n / tens % 10) << " ";
        tens /= 10;
    }
    cout << endl;

    //逆序打印各位数字
    cout << "逆序:";
    while (n != 0) {
        cout << n % 10;
        n /= 10;
    }
    cout << endl;

    return 0;
}
