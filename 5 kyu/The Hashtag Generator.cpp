//https://www.codewars.com/kata/52449b062fb80683ec000024/train/cpp

#include <iostream>
#include <optional>
#include <string>

using str_t = std::string;
using opt_str_t = std::optional<str_t>;

opt_str_t generate_hashtag(const str_t& str) {
    str_t r = "#"; int count = 0;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {count++; continue;}
        if (str[i-1] == ' ' || i == 0) r += std::toupper(str[i]);
        else r += std::tolower(str[i]);
    }
    if (str.size()-count >= 140 || r == "#") return std::nullopt;
    return r;
}

int main() {
    generate_hashtag("Do We have A Hashtag");
}