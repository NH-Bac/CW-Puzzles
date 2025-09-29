//https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1

#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>

std::size_t duplicateCount(const std::string& in)
{
    std::unordered_map<char, int> freqMap; int count = 0;
    for (char c : in) freqMap[std::tolower(c)]++;
    for (auto i : freqMap) if (i.second > 1) count ++;
    return count;
}
int main() {
    std::cout << duplicateCount("aabbcc") << std::endl;
}