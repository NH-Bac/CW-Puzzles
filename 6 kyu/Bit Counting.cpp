#include <iostream>
#include <string>

unsigned int countBits(unsigned long long n) {
    int oneCount = 0;
    std::string binary;

    while (n > 0) {
        int remainder = n % 2;
        binary = std::to_string(remainder) + binary;
        n /= 2;
    }
    for (char i : binary) {
        if (i == '1') {
            oneCount++;
        }
    }
    return oneCount;
}

int main() {
    int number;
    std::cin >> number;
    std::cout << countBits(number) <<std::endl;
}