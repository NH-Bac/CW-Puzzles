#include <iostream>

long long rowSumOddNumbers(unsigned n){
    int nums = (n*(n+1)/2);
    int sumOdd = nums*(2+(nums-1)*2)/2 - (nums-n)*(2+((nums-n)-1)*2)/2;
    return sumOdd;
}

int main() {
    rowSumOddNumbers(5); // output should be 125
}