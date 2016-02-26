#include <iostream>
#include <vector>
#include <unordered_set>
#include <math.h>
using namespace std;

int main() {
	unordered_set<long long> pent;
	unordered_set<long long> hex;
	for (long long i = 1; i < 1000000; i++) {
		if (i % 10000 == 0) cout << "here->"<<i << endl;
		pent.insert(i * (3 * i - 1) / 2);
		hex.insert(i * (2 * i - 1));
	}
	for (long long i = 1; i < 1000000; i++) {
		long long tri = i * (i + 1) / 2;
		if (pent.find(tri) != pent.end() && hex.find(tri) != hex.end()) {
			cout << tri << endl;
		}
	}
	cout << "Done" << endl;
	int wait;
	cin >> wait;
	return 0;
}
