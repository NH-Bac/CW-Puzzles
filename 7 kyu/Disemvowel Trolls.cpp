//http://codewars.com/kata/52fba66badcd10859f00097e

#include <algorithm>
#include <iostream>
#include <string>

std::string disemvowel(std::string str) {
    str.erase(std::remove_if(str.begin(), str.end(), [](char c) {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
               c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }), str.end());
    return str;
}
int main() {
    std::cout << disemvowel("This website is for losers LOL!") << std::endl;
}