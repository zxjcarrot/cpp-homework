#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    double x;
    cout << "输入x的值:";
    cin >> x;
    cout << "y=";
    if (x < 1)
        cout << x;
    else if (x < 10)
        cout << (2 * x - 1);
    else
        cout << (3 * x - 11);
    cout << endl;
    return 0;
}
