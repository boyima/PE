#include <iostream>
#include <vector>
using namespace std;
void printVecVector(vector<vector<int>> nums);
void printVector(vector<int> nums);

int main() {
	vector<vector<int>> data(20, vector<int>(20, 0));
	int n = 4;
	int res = 0;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			cin >> data[i][j];
		}
	}
	printVecVector(data);
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j <= 20 - n; j++) {
			int temp = 1;
			for (int k = 0; k < 4; k++) {
				temp = temp * data[i][j + k];
			}
			if (temp > res) {
				res = temp;
			}
		}
	}

	for (int j = 0; j < 20; j++) {
		for (int i = 0; i <= 20 - n; i++) {
			int temp = 1;
			for (int k = 0; k < 4; k++) {
				temp = temp * data[i + k][j];
			}
			if (temp > res) {
				res = temp;
			}
		}
	}
	for (int i = 0; i <= 20 - n; i++) {
		for (int j = 0; j <= 20 - n; j++) {
			int temp = 1;
			for (int k = 0; k < 4; k++) {
				temp = temp * data[i + k][j + k];
			}
			if (temp > res) {
				res = temp;
			}
		}
	}
	for (int i = (n - 1); i < 20; i++) {
		for (int j = 0; j <= 20 - n; j++) {
			int temp = 1;
			for (int k = 0; k < 4; k++) {
				temp = temp * data[i - k][j + k];
			}
			if (temp > res) {
				res = temp;
			}
		}
	}
	cout << "maximum product = " << res << endl;

	// your code goes here
	int wait;
	cin >> wait;
	return 0;
}

void printVecVector(vector<vector<int>> nums) {
	int n = nums.size();
	for (int i = 0; i<n; i++) {
		printVector(nums[i]);
	}
	if (n == 0) {
		cout << endl;
	}
}

void printVector(vector<int> nums) {
	int n = nums.size();
	for (int i = 0; i<n; i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
}
