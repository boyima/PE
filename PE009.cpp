#include <iostream>
using namespace std;

bool isPythaTriplet(int a, int b, int c);
void main() {
	int resA, resB, resC;
	for (int a = 0; a < 1000; a++) {
		for (int b = a; b < 1000; b++) {
			if (isPythaTriplet(a, b, (1000 - a - b))) {
				resA = a;
				resB = b;
				resC = 1000 - a - b;
				break;
			}
		}
	}
	cout << "a = " << resA << ", b = " << resB << ", c = " << resC << endl;
	cout << "prod abc = " << resA * resB * resC << endl;
	int wait;
	cin >> wait;
}

bool isPythaTriplet(int a, int b, int c) {
	if ((pow(a, 2) + pow(b, 2) == pow(c, 2)) && (a < b) && (b < c)) {
		return true;
	}
	return false;
}
