#include <iostream>
using namespace std;

int main() {
	int dn1, dn2;
	int nn1, nn2;
	
	cout << "请输入第一个分数的分子和分母:";
	cin >> nn1 >> dn1;
	cout << "请输入第二个分数的分子和分母:";
	cin >> nn2 >> dn2;
	
	cout << "它们乘积的分数值的分子和分母为:" << (nn1 * nn2) << ' ' << (dn1 * dn2) << endl;
	cout << "它们乘积的小数值为:" << (double)(nn1 * nn2) / (dn1 * dn2) << endl;
    return 0;
}
