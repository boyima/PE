#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int res;
    for(int i = 0; i<1000; i++){
        if((i % 3 == 0)||(i % 5 == 0)){
            res = res + i;
        }
    }
    cout<<res<<endl;
	return 0;
}
