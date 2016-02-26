#include <iostream>
#include <vector>
using namespace std;
bool isPalindrome(int num);
void printVector(vector<int> nums);
int main() {
	int res = 0;
	for (int i = 100; i < 999; i++) {
		for (int j = i; j < 999; j++) {
			int num = i * j;
			if (isPalindrome(num) && (num > res)) {
				res = num;
				cout << res << " " << i << " " << j << endl;
			}
		}
	}
	// your code goes here
	int wait;
	cin >> wait;
	return 0;
}

bool isPalindrome(int num) {
	vector<int> digits;
	while (num != 0) {
		digits.push_back(num % 10);
		num = num / 10;
	}
	bool res = 1;
	int start = 0;
	int end = digits.size() - 1;
	while (start < end) {
		if (digits[start] != digits[end]) {
			res = 0;
			break;
		}
		start++;
		end--;
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
