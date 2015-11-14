#include <iostream>
#include <cstring>
using namespace std;

int main () {
    int N;
    cin >> N;
    while (N--) {
        int n, m, same = true;
        char words1[6][11];
        char words2[6][11];
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> words1[i];
        }

        cin >> m;
        for (int i = 0; i < m; ++i) {
            cin >> words2[i];
        }
        
        if (n != m) {
            same = false;
        } else {
            for (int i = 0; i < n; ++i) {
                if (words1[i][0] != words2[i][0]) {
                    same = false;
                }
            }
        }

        if (same) {
            cout << "SAME" << endl;
        } else {
            cout << "DIFFERENT" << endl;
        }
    }
    return 0;
}