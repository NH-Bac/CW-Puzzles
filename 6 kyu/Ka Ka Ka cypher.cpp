//https://www.codewars.com/kata/5934d648d95386bc8200010b

#include <iostream>
#include <string>
#include <unordered_set>

std::string kaCokadekaMe(std::string word)
{
    std::unordered_set<char> vowel = {'a','o','e','u','i',
                                      'A','O','E','U','I' };
    std::string r;
    for (int i = 0; i < word.size(); i++) {
        if (((i > 0 && vowel.count(word[i-1])) && !vowel.count(word[i]) && i != word.size()) || i == 0) {
            r+="ka";
        }
        r += word[i];
    }
    return r;
}
int main() {
    std::cout << kaCokadekaMe("maintaine") << std::endl;
}