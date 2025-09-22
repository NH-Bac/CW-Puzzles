//https://www.codewars.com/kata/559b8e46fa060b2c6a0000bf/train/cpp

#include <algorithm>
#include <numeric>
#include <iostream>
#include <vector>

typedef unsigned long long ull;
class Diagonal
{
public:

    static ull diagonal(int n, int p) {
        ull res = 0;
        std::vector<double> mul(p-1);

        for (int i = 1; i < p; i++) {
            mul[i-1] = static_cast<double>(p - i) / i;
            std::cout << mul[i-1] << std::endl;
        }

        for (int count = 1; count <= n-1; count++) {
            double mult = 1;
            for (const double i : mul) {
                mult *= i;
            }
            for (int j = 1; j < p; j++) {
                mul[j-1] += static_cast<double>(1) / j;
                std::cout << " mul: " << mul[j-1] << std::endl;
            }
            res += mult;
        }
        return res;
    };
};

int main () {
    std::cout << Diagonal::diagonal(20, 3) << std::endl;
}