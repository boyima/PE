#include <iostream>
#include <vector>
using namespace std;
vector<long> factors;
void findFactors(long num);
void printVector(vector<long> nums);
int main() {
    findFactors(600851475143);
    printVector(factors);
  // your code goes here
  return 0;
}

void findFactors(long num){
    for(long i = 2; i < num + 1; i++){
        if(num % i == 0){
            factors.push_back(i);
            findFactors(num / i);
            break;
        }
    }
}

void printVector(vector<long> nums){
    int n = nums.size();
    for (int i = 0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
