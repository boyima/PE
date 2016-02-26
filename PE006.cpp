#include <iostream>
using namespace std;
int sumsq_sqsum_diff(int n);
int main() {
	int res = sumsq_sqsum_diff(100);
	cout << res << endl;
	// your code goes here
	int wait;
	cin >> wait;
	return 0;
}

int sumsq_sqsum_diff(int n) {
	int sumsq = pow((1 + n) * n / 2, 2);
	int sqsum = n * (n + 1) * (2 * n + 1) / 6;
	cout << "sumsq " << sumsq << endl;
	cout << "sqsum " << sqsum << endl;
	return sumsq - sqsum;
}
