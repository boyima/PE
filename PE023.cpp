#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector<int> findFactors(int num);
void printVector(vector<int> nums);
int sumFactors(int num);

int main() {
	vector<int> abundantNum;
	for (int i = 1; i <= 28123; i++) {
		int factorSum = sumFactors(i);
		if (factorSum > i) {
			abundantNum.push_back(i);
			cout << "Num = " << i << ", factorSum = " << factorSum << endl;
		}
	}
	bool numExist[28123];
	memset(numExist, false, sizeof(numExist));
	int n = abundantNum.size();
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int sum = abundantNum[i] + abundantNum[j];
			if (sum <= 28123) {
				numExist[sum - 1] = true;
			}
		}
	}
	int res = 0;
	for (int i = 0; i < 28123; i++) {
		if (numExist[i] == false) {
			cout << (i + 1) << " cannot be written as two abundant sums" << endl;
			res = res + (i + 1);
		}
	}
	cout << "res = " << res << endl;
	int wait;
	cin >> wait;
	return 0;
}

int sumFactors(int num) {
	vector<int> factors = findFactors(num);
	if (num <= 1) return num;
	int res = 1;
	int n = factors.size();
	int current = factors[0];
	int temp = current;
	for (int i = 1; i < n; i++) {
		if (factors[i] == current) {
			temp = temp * current;
		}
		else {
			res = res * (1 - temp * current) / (1 - current);
			current = factors[i];
			temp = current;
		}
	}
	res = res * (1 - temp * current) / (1 - current);
	res = res - num;
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
