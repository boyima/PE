#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num, vector<int> primeList);
void printVector(vector<int> nums);
int main() {
	int num = 3;
	vector<int> primeList;
	primeList.push_back(2);
	while (primeList.size() < 10002) {
		if (isPrime(num, primeList)) {
			primeList.push_back(num);
		}
		num++;
	}
	cout << primeList[10000] << endl;
	int wait;
	cin >> wait;
}

bool isPrime(int num, vector<int> primeList) {
	int n = primeList.size();
	bool res = true;
	for (int i = 0; i < n; i++) {
		if (num % primeList[i] == 0) {
			res = false;
			break;
		}
	}
	return res;
}
