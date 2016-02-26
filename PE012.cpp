#include <iostream>
#include <vector>
using namespace std;
int findNumFactors(int num);
vector<int> findFactors(int num);

int main() {
	int i = 1;
	int sum = 0;
	while (1) {
		i++;
		sum = (1 + i) * i / 2;
		int numFactors = findNumFactors(sum);
		if (numFactors > 500) break;
	}
	cout << "Num = " << sum << endl;

	// your code goes here
	int wait;
	cin >> wait;
	return 0;
}

int findNumFactors(int num) {
	vector<int> factors = findFactors(num);
	int res = 1;
	int n = factors.size();
	int factorCount = 0;
	int current = factors[0];
	for (int i = 0; i < n; i++) {
		if (factors[i] == current) {
			factorCount++;
		}
		else {
			res = res * (factorCount + 1);
			factorCount = 1;
			current = factors[i];
		}
	}
	res = res * (factorCount + 1);
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
