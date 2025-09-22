//https://www.codewars.com/kata/54ff3102c1bad923760001f3/train/cpp

#include <iostream>

int getCount(const std::string& inputStr){
    int num_vowels = 0;
    for (char c : inputStr) {
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') num_vowels++;
    }
    return num_vowels;
}
int main() {
    std::cout << getCount("abracadabra") << std::endl;
}