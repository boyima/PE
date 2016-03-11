#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
	unordered_set<double> res;
	for (int i = 2; i <= 100; i++) {
		for (int j = 2; j <= 100; j++) {
			double temp = pow(i, j);
			if (res.find(temp) != res.end()) continue;
			res.insert(temp);
		}
	}

	cout << "res == " << res.size() << endl;
	system("pause");
	return 0;
}
