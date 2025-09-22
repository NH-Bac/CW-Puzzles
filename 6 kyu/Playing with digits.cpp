//https://www.codewars.com/kata/5552101f47fc5178b1000050/train/cpp

#include <iostream>
#include <vector>
#include <cmath>

class DigPow
{
public:
    static int digPow(int n, int p) {
        std::vector<int> digits;
        int res = 0;
        int c = n;

        while (n > 0) {digits.push_back(n%10); n/=10;}
        for (int i = digits.size() - 1; i >= 0; i--) {
            res += pow(digits[i], p); p++;
        }
        return res%c == 0? res/c: -1;
    };
};
int main() {
    std::cout << DigPow::digPow(46288, 3)  << std::endl;
}