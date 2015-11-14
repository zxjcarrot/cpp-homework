#include <iostream>
#include <cstring>
using namespace std;

int main () {
    int n;
    
    while (cin >> n, n != 0) {
        while (n >= 10) {
            int t = 0;
            while (n) {
                t += n % 10;
                n /= 10;
            }
            n = t;
        }
        cout << n << endl;
    }
    return 0;
}