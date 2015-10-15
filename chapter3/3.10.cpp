#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "输入一个十六进制非负整数n:";
    cin >> hex >> n;
    
    cout << oct << n << "(Oct), "
         << dec << n << "(Dec), "
         << setiosflags(ios::uppercase) << hex << n << "(Hex)"
         << endl;
    return 0;
}
