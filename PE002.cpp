#include <iostream>
using namespace std;

int main() {
    int res = 0;
    int a = 1;
    int b = 2;
    while(b < 4000000){
        if(b % 2 == 0){
            res = res + b;
        }
        b = a + b;
        a = b - a;
    }
    cout<<res<<endl;
	// your code goes here
	return 0;
}
