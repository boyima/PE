#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
bool isPrime(int num, vector<int> primeList);
void printVector(vector<int> nums);
void main() {
	vector<int> primeList;
	primeList.push_back(2);
	for (int i = 3; i < 2000000; i = i + 2) {
		if (isPrime(i, primeList)) {
			primeList.push_back(i);
		}
	}
	long long res = 0;
	int n = primeList.size();
	for (int i = 0; i < n; i++) {
		res = res + primeList[i];
	}
	//printVector(primeList);
	cout << "sum is: " << res << endl;
	int wait;
	cin >> wait;
}


bool isPrime(int num, vector<int> primeList) {
	bool res = true;
	int n = primeList.size();
	int numsqrt = sqrt(num);
	for (int i = 0; (i < n) && (primeList[i]<=numsqrt); i++) {
		if (num % primeList[i] == 0) {
			res = false;
			break;
		}
	}
	return res;
}

void printVector(vector<int> nums) {
	int n = nums.size();
	for (int i = 0; i<n; i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
}
