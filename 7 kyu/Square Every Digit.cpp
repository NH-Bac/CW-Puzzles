//https://www.codewars.com/kata/546e2562b03326a88e000020

#include <iostream>

int square_digits(int num) {
    std::string s;
    std::string num_str = std::to_string(num);

    for (char c : num_str) {
        int digit = c - '0';
        int squared = digit * digit;
        s += std::to_string(squared);
    }
    return std::stoi(s);
}

int main () {
    std::cout << square_digits(3212) << std::endl;
}