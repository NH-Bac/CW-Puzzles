//https://www.codewars.com/kata/58dbdccee5ee8fa2f9000058/train/cpp

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

bool sp_eng(const std::string& s) {
    std::string lower = s;
    std::transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    return lower.find("english") != std::string::npos;
}
int main() {
    std::cout << sp_eng("1234english ;k") << std::endl;
}