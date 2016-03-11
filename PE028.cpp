#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int res = 1;
	for (int i = 1; i <= 500; i++) {
		res = res + 4 * (2 * i + 1) * (2 * i + 1) - 12 * i;
	}
	cout << res << endl;
	system("pause");
	return 0;
}
