#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<vector<int>> data(100, vector<int>(100, 0));
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> data[i][j];
		}
	}
	for (int i = 1; i < 100; i++) {
		data[i][0] = data[i - 1][0] + data[i][0];
		data[i][i] = data[i - 1][i - 1] + data[i][i];
	}
	for (int i = 2; i < 100; i++) {
		for (int j = 1; j < i; j++) {
			data[i][j] = max(data[i - 1][j - 1], data[i - 1][j]) + data[i][j];
		}
	}
	int res = 0;
	for (int i = 0; i < 100; i++) {
		res = max(res, data[99][i]);
	}
	cout << res << endl;
	system("pause");
	return 0;
}
