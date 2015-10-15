#include <iostream>
using namespace std;

int main () {
    int A;
    while (cin >> A) {
        if (A == 0)
            break;
        int c = 0; // 1所在的位数,从0开始
        while ((A & 1) == 0) {
            A >>= 1;
            c++;
        }

        cout << (1 << c) << endl;
    }
    return 0;
}
