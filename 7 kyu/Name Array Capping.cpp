//https://www.codewars.com/kata/5356ad2cbb858025d800111d/train/cpp

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

std::vector<std::string> capMe(const std::vector<std::string>& s) {
    std::vector<std::string> r;
    for (auto& i : s) {
        std::string c = i;
        std::transform(c.begin(), c.end(), c.begin(), ::tolower);
        c[0] = toupper(c[0]); r.push_back(c);
    } return r;
}
int main() {
    capMe({"jo", "nelson", "jurie"});
}