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
set<int> fourDigitPrimeSet(int n);
bool isPermut(int a, int b);

int main() {
	set<int> prime = fourDigitPrimeSet(10000);
	for (auto i = prime.begin(); i != prime.end(); i++) {
		for (auto j = i; j != prime.end(); j++) {
			if (isPermut(*i, *j) == false || *i == *j) {
				continue;
			}
			else {
				int temp = *j + (*j - *i);
				if (temp < 10000) {
					auto k = prime.find(temp);
					if (k != prime.end() && isPermut(*i, *k)) {
						cout << *i << ", " << *j << ", " << *k << endl;
					}
				}
			}
		}
	}
	cout << "Done" << endl;
	int wait;
	cin >> wait;
	return 0;
}

set<int> fourDigitPrimeSet(int n) {
	set<int> res;
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
	for (int i = 1000; i < n; i++) {
		if (numPrime[i]) {
			res.insert(i);
			cout << i << endl;
		}
	}
	return res;
}

bool isPermut(int a, int b) {
	vector<int> aDigits;
	vector<int> bDigits;
	for (int i = 0; i < 3; i++) {
		aDigits.push_back(a % 10);
		bDigits.push_back(b % 10);
		a = a / 10;
		b = b / 10;
	}
	aDigits.push_back(a);
	bDigits.push_back(b);

	sort(aDigits.begin(), aDigits.end());
	sort(bDigits.begin(), bDigits.end());
	for (int i = 0; i < 4; i++) {
		if (aDigits[i] != bDigits[i]) {
			return false;
		}
	}
	return true;
}
