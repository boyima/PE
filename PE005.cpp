#include <iostream>
#include <vector>
using namespace std;
vector<int> findFactors(int num);
int findSmallestProd(int num);
void printVector(vector<int> nums);
int main() {
	vector<int> b = findFactors(20);
	printVector(b);
	int a = findSmallestProd(20);
	cout << a << endl;
	// your code goes here
	int wait;
	cin >> wait;
	return 0;
}

int findSmallestProd(int num) {
	vector<int> factorVec;
	for (int i = 2; i <= num; i++) {
		vector<int> factorVec_copy = factorVec;
		vector<int> factors = findFactors(i);
		int m = factors.size();
		for (int j = 0; j < m; j++) {
			bool inFactorVec = 0;
			for (int k = 0; k < factorVec_copy.size(); k++) {
				if (factors[j] == factorVec_copy[k]) {
					factorVec_copy.erase(factorVec_copy.begin() + k);
					inFactorVec = 1;
					break;
				}
			}
			if (inFactorVec == 0) {
				factorVec.push_back(factors[j]);
			}
		}
	}
	printVector(factorVec);
	int res = 1;
	int vecSize = factorVec.size();
	for (int i = 0; i < vecSize; i++) {
		res = res * factorVec[i];
	}
	return res;
}


vector<int> findFactors(int num) {
	vector<int> res;
	for (int i = 2; i <= num; i++) {
		if (num % i == 0) {
			res.push_back(i);
			num = num / i;
			i--;
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
