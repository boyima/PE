#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iostream>
#include <iomanip>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <stack>
#include <sstream>
#include <string.h>
#include <utility>
#include <vector>
using namespace std;
vector<int> PrimeNums(int n);
int formula(int n, int a, int b);
int main() {
	int maxA = 0;
	int maxB = 0;
	int maxN = 0;
	vector<int> prime = PrimeNums(10000000);
	set<int> primeSet;
	for (int i = 0; i < prime.size(); i++) {
		primeSet.insert(prime[i]);
	}
	for (int a = -999; a < 999; a = a + 2) {
		for (int b = 1; prime[b] < 1000; b++) {
			int n = 0;
			while (true) {
				int res = formula(n, a, prime[b]);
				if (primeSet.find(res) == primeSet.end()) break;
				n++;
			}
			if (n > maxN) {
				maxA = a;
				maxB = prime[b];
				maxN = n;
			}
			//cout << "a = " << a << ", b = " << prime[b] << ", n = " << n << endl;
		}
	}
	cout << maxA << ", " << maxB << ", " << maxN << endl;
	system("pause");
	return 0;
}

vector<int> PrimeNums(int n) {
	vector<int> res;
	vector<bool> numPrime(n, true);
	numPrime[0] = false;
	numPrime[1] = false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (numPrime[i] == false) {
			continue;
		}
		else {
			for (int j = i * 2; j < n; j = j + i) {
				numPrime[j] = false;
			}
		}
	}
	for (int i = 2; i < n; i++) {
		if (numPrime[i]) {
			res.push_back(i);
		}
	}
	return res;
}

int formula(int n, int a, int b) {
	return n * n + a * n + b;
}
