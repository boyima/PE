#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> add(vector<int> a, vector<int> b);
int main() {
	vector<int> a(1000, 0);
	vector<int> b(1000, 0);
	int res;
	a[999] = 1;
	b[999] = 1;
	for (int i = 3; ; i++) {
		vector<int> c = add(a, b);
		if (c[0] != 0) {
			res = i;
			break;
		}
		a = b;
		b = c;
	}
	
	cout <<  res << endl;
	system("pause");
}

vector<int> add(vector<int> a, vector<int> b) {
	vector<int> res(a.size(), 0);
	int carry = 0;
	for (int i = a.size() - 1; i >= 0; i--) {
		res[i] = (a[i] + b[i] + carry) % 10;
		carry = (a[i] + b[i] + carry) / 10;
	}
	return res;
}
