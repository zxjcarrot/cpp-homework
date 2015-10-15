#include <iostream>
using namespace std;

int main () {
    char c;
    
    cout << "输入一个小写字母:";
    c = getchar();

    if (c < 'a' || c > 'z') {
        cout << "非小写字母" << endl;
    } else {
        cout << "大写字母为:" << (char)(c - 32) << endl;
    }

    return 0;
}
