#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	int count = 0;
	for (int a = 0; a <= 1; a++) {
		int temp1 = 200 * a;
		if (temp1 == 200) {
			count++;
			break;
		}
		if (temp1 > 200) {
			break;
		}
		for (int b = 0; b <= 2; b++) {
			int temp2 = temp1 + 100 * b;
			if (temp2 == 200) {
				count++;
				break;
			}
			if (temp2 > 200) {
				break;
			}
			for (int c = 0; c <= 4; c++) {
				int temp3 = temp2 + 50 * c;
				if (temp3 == 200) {
					count++;
					break;
				}
				if (temp3 > 200) {
					break;
				}
				for (int d = 0; d <= 10; d++) {
					int temp4 = temp3 + 20 * d;
					if (temp4 == 200) {
						count++;
						break;
					}
					if (temp4 > 200) {
						break;
					}
					for (int e = 0; e <= 20; e++) {
						int temp5 = temp4 + 10 * e;
						if (temp5 == 200) {
							count++;
							break;
						}
						if (temp5 > 200) {
							break;
						}
						for (int f = 0; f <= 40; f++) {
							int temp6 = temp5 + 5 * f;
							if (temp6 == 200) {
								count++;
								break;
							}
							if (temp6 > 200) {
								break;
							}
							for (int g = 0; g <= 100; g++) {
								int temp7 = temp6 + 2 * g;
								if (temp7 == 200) {
									count++;
									break;
								}
								if (temp7 > 200) {
									break;
								}
								for (int h = 0; h <= 200; h++) {
									int temp8 = temp7 + 1 * h;
									if (temp8 == 200) {
										count++;
										break;
									}
									if (temp8 > 200) {
										break;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << "res = " << count << endl;
	int wait;
	cin >> wait;
	return 0;
}
