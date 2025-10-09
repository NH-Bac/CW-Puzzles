//https://www.codewars.com/kata/54b42f9314d9229fd6000d9c/train/cpp

#include <iostream>
#include <string>
#include <unordered_map>

std::string duplicate_encoder(const std::string& word){
    std::unordered_map<char, int> map;
    std::string r, t = word;
    for (int i = 0; i < t.size(); i++) {t[i] = std::tolower(t[i]); map[t[i]]++;}
    for (char c: t) r += map[c] > 1? ')': '(';
    return r;
}

int main() {
    std::cout << duplicate_encoder("Success");
}