#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
void main() {
	int num = 2000000;
	bool* flag = new bool[num];
	memset(flag, true, sizeof(num));
	double sqrtnum = sqrt(num);
	flag[0] = false;
	flag[1] = false;
	for (int i = 2; i <= sqrtnum; i++) {
		for (int j = 2 * i; j <= num; j = j + i) {
			flag[j] = false;
		}
	}
	long long res = 0;
	for (int i = 0; i <= num; i++) {
		if (flag[i]) {
			res = res + i;
		}
	}
	cout << res << endl;
	// your code goes here
	int wait;
	cin >> wait;
}
