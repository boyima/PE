#include <iostream>
#include <vector>
using namespace std;
vector<int> collatz(int num);
long long collatzLength(long long num);
int main() {
	int n = 1000000;
	int longestIndex = 0;
	int longestChain = 0;
	for (int i = 1; i < n; i++) {
		int len = collatzLength(i);
		if (len > longestChain) {
			longestChain = len;
			longestIndex = i;
		}
	}
	cout << longestIndex << endl;
	// your code goes here
	int wait;
	cin >> wait;
	return 0;
}
vector<int> collatz(int num) {
	vector<int> res;
	while (num != 1) {
		res.push_back(num);
		if (num % 2 == 0) {
			num = num / 2;
		}
		else {
			num = num * 3 + 1;
		}
	}
	res.push_back(num);
	return res;
}

long long collatzLength(long long num) {
	long long res = 0;
	while (num != 1) {
		res++;
		if (num % 2 == 0) {
			num = num / 2;
		}
		else {
			num = num * 3 + 1;
		}
	}
	res++;
	return res;
}
