#include <iostream>
using namespace std;

int main () {
    int n = 0;
    cout << "输入一个三位数:";
    cin >> n;
    cout << (n % 10) << (n / 10 % 10) << (n / 100) << endl; 

    return 0;
}
