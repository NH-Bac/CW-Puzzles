//https://www.codewars.com/kata/55f4e56315a375c1ed000159/train/cpp

#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

int sumOfDigits(long long n) {
    int sum = 0;
    while (n>0) {
        sum += n%10;
        n /= 10;
    } return sum;
}

unsigned long powerSumDigTerm(unsigned int n) {
    std::vector<long long> res = {};
    for (int i = 2; i < 1000; i++) {
        for (int j = 2; j < 20; j++) {
            long long num = pow(i, j);
            if (sumOfDigits(num) == i) {
                res.push_back(num);
                std::cout << "num: " << num << "; var " << i << ", "<< j << std::endl;
            }
        }
    }
    std::sort(res.begin(), res.end());
    res.erase(std::unique(res.begin(), res.end()), res.end());
    return res[n-1];
}

int main() {
    std::cout << powerSumDigTerm(30) << std::endl;
}