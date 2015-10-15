#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int years;
    double initial;
    double rate;
    
    cout << "请输入本金:";
    cin >> initial;
    cout << "请输入年利率:";
    cin >> rate;
    cout << "请输入存款年限:";
    cin >> years;

    cout << "到期后银行需支付总金额为:" <<  initial * pow(1 + rate, years) << endl;
    return 0;
}
