//https://www.codewars.com/kata/5264d2b162488dc400000001/train/cpp

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

std::string spinWords(const std::string &str)
{
    std::stringstream ss(str);
    std::string word, r;
    while (ss >> word) {
        if (word.size() > 4) {
            std::reverse(word.begin(), word.end());
        } r += word + ' ';
    } r.pop_back(); 
    return r;
}


int main() {
    std::cout << spinWords("Hey fellow warriors");
}