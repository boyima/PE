#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n = 20;
	vector<vector<long long>> grid(n + 1, vector<long long>(n + 1, 1));
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < n + 1; j++) {
			grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
		}
	}
	cout << grid[n][n] << endl;
	// your code goes here
	int wait;
	cin >> wait;
	return 0;
}
