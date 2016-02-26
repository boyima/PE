#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int calcScore(string s, int loc);
int main() {
	string s;
	cin >> s;
	vector<string> vecStr;
	int res = 0;
	while (s.find(',') != string::npos) {
		int index = s.find_first_of(',');
		vecStr.push_back(s.substr(1, index-2));
		s = s.substr(index + 1);
	}
	vecStr.push_back(s.substr(1, s.size() - 2));
	sort(vecStr.begin(), vecStr.end());
	for (int i = 0; i < vecStr.size(); i++) {
		res = res + calcScore(vecStr[i], i + 1);
		cout << vecStr[i] << ": " << vecStr[i] <<"x"<<(i+1)<<" = "<< calcScore(vecStr[i], i + 1) << endl;
	}
	cout << "res = " << res << endl;
	int wait;
	cin >> wait;
	return 0;
}

int calcScore(string s, int loc) {
	int res = 0;
	for (int i = 0; i < s.size(); i++) {
		res = res + s[i] - 'A' + 1;
	}
	res = res * loc;
	return res;
}
