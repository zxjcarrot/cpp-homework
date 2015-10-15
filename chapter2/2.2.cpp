#include <iostream>
using namespace std;

int main () {
    double price;
    double discount;
    cout << "输入标价:";
    cin >> price;
    cout << "输入折扣率(百分比):";
    cin >> discount;
    cout << "售价:" << price
         << ", 打折后售价:" << (price * discount / 100)
         << ", 优惠金额:" << price - (price * discount / 100)
         << endl;
    return 0;
}
