#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "����һ��ʮ�����ƷǸ�����n:";
    cin >> n;
    
    cout << oct << n << ", "
         << dec << n << ", "
         << hex << setiosflags(ios::uppercase)
         << endl;
    return 0;
}
