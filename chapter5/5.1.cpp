#include <iostream>
using namespace std;

int main () {
    int s = 0, n;
    int A[100][100];
    cin >> n;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> A[i][j];

    for (int i = 0; i < n; ++i)
        s += A[i][i] + A[i][n - i - 1]; //主对角线 + 副对角线

    if (n % 2 == 1) // 奇数大小的数组需要减掉最中间的值
        s -= A[n / 2][n / 2];

    cout << s << endl;
    return 0;
}