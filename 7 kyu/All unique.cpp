//https://www.codewars.com/kata/553e8b195b853c6db4000048/train/cpp

#include <iostream>
#include <string>
#include <unordered_map>

bool hasUniqueChars(const std::string& s) {
    std::unordered_map<char, int> freq;
    for (char c : s) if (++freq[c] > 1) return false; return true;
}

int main() {
    std::cout << hasUniqueChars("abcdef") << std::endl;
}