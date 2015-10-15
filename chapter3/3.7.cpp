#include <iostream>
using namespace std;

int main(){
	int nickels;
	int coins;
	char name[100];
	cout << "请输入姓名:";
	cin >> name;
	cout << "请输入镍币个数:";
	cin >> nickels;
	cout << "请输入硬币个数:";
	cin >> coins;
	
	cout << "你可以获得" << (nickels * 5 + coins) / 100 << "美元"
		 << (nickels * 5 + coins) % 100 << "美分" <<endl;
	return 0;
}
