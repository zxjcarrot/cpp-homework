#include <iostream>
#include <cmath>  // for pow, abs
#include <cfloat> // for DBL_MAX
using namespace std;

int main () {
	int B, N;
	while (cin >> B >> N) {
		if (B == 0 && N == 0)
			break;

		int A = 0;
		double min_dis = DBL_MAX;
		int L = 0, H = 1000000;
		// 二分查找逼近
		while (L <= H) {
			int M = L + ((H - L) >> 1);
			double p = pow((double)M, (double)N);
			double dis = abs(p - B);
			if (p > B) {
				H = M - 1;
			} else {
				L = M + 1;
			}

			if (dis < min_dis) {
				A = M;
				min_dis = dis;
			}
		}
		cout << A << endl;
	}
	
	return 0;
}
