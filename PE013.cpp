#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
	int n = 12;
	long long res = 0;
	for (int i = 0; i < 100; i++) {
		string temp;
		cin >> temp;
		temp = temp.substr(0, n);
		long long tempNum = stoll(temp);
		cout << tempNum << endl;
		res = res + tempNum;
	}
	cout << res << endl;
	while (res > pow(10, 10)) {
		res = res / 10;
	}
	cout << res << endl;
	// your code goes here
	int wait;
	cin >> wait;
	return 0;
}
