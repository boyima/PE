#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<int> nums);
vector<int> multiply(vector<int> input, int num);
int main() {
	vector <int> data;
	int res = 0;
	data.push_back(1);
	for (int i = 0; i < 350; i++) {
		data.push_back(0);
	}
	for (int i = 0; i < 1000; i++) {
		data = multiply(data, 2);
	}
	int n = data.size();
	for (int i = 0; i < n; i++) {
		res = res + data[i];
	}
	cout << res << endl;
	int wait;
	cin >> wait;
	return 0;
}

vector<int> multiply(vector<int> input, int num) {
	int carry = 0;
	int n = input.size();
	vector<int> res(n, 0);
	for (int i = 0; i < n; i++) {
		res[i] = (input[i] * num + carry) % 10;
		carry = (input[i] * num + carry) / 10;
	}
	return res;
}
