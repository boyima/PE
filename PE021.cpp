#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector<int> findFactors(int num);
void printVector(vector<int> nums);
int sumFactors(int num);

int main() {
	vector<int> nums;
	int res = 0;
	for (int i = 0; i < 10000; i++) {
		nums.push_back(sumFactors(i));
	}
	for (int i = 0; i < 10000; i++) {
		int temp = nums[i];
		cout << i <<"->"<<temp << endl;
		if (temp != i && temp < 10000) {
			if (nums[temp] == i) {
				res = res + i;
			}
		}
	}
	cout << res << endl;
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
