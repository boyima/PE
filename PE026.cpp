#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int cycle(int a);
int main() {
	int maxLen = 0;
	int maxInd = 0;
	for (int i = 1; i <= 1000; i++) {
		int res = cycle(i);
		if (res > maxLen) {
			maxLen = res;
			maxInd = i;
		}
	}
	cout << maxInd << endl;
	system("pause");
}

int cycle(int a) {
	unordered_map<int, int> remMap;
	int i = 1;
	int num = 1;
	while (num != 0) {
		if (num * 10 < a) {
			num = num * 10;
			i++;
			continue;
		}
		else {
			num = num * 10;
			num = num - (num / a * a);
			i++;
		}
		if (remMap.find(num) != remMap.end()) {
			return i - remMap[num];
		}
		else {
			remMap[num] = i;
		}
	}
	return 0;
}
