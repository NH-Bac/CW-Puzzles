//https://www.codewars.com/kata/56cd44e1aa4ac7879200010b/train/cpp

#include <iostream>

bool is_uppercase(const std::string &s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') return false;
    }
    return true;
}

int main() {
    std::cout << is_uppercase("HELLO I AM DONALD") << std::endl;
}