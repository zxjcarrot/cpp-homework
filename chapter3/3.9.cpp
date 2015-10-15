#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "输入一个十六进制非负整数n:";
    cin >> n;
    
    cout << oct << n << ", "
         << dec << n << ", "
         << hex << setiosflags(ios::uppercase)
         << endl;
    return 0;
}
