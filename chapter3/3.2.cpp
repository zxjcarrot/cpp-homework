#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int a, b, c;
    cout << "输入三个整数:";
    cin >> a >> b >> c;
    cout << "最大数为: " << max(a, max(b ,c)) << endl;

    return 0;
}
