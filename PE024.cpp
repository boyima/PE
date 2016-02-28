#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int factorial(int a);

int main() {
	vector<int> nums = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	string res = "";
	int tar = 999999;
	int pos;
	for (int i = 0; i < 10; i++) {
		pos = tar / factorial(nums.size() - 1);
		res.push_back((nums[pos]) + '0');
		tar = tar - pos * factorial(nums.size() - 1);
		nums.erase(nums.begin() + pos);
	}
	
	cout << res << endl;
	system("pause");
}

int factorial(int a) {
	int res = 1;
	for (int i = 1; i <= a; i++) {
		res = res * i;
	}
	return res;
}
