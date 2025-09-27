//https://www.codewars.com/kata/54a91a4883a7de5d7800009c/train/cpp

#include <iostream>
#include <string>

std::string incrementString(const std::string &str) {
    std::string t;
    int num = 0, mult = 1, index = -1, k = 1;
    
    for (int i=str.size()-1; i >= 0; i--) {
        if (isalpha(str[i])) {index = i; break;}
        num += (str[i] - '0') * mult; mult *= 10;
    }
    num += 1;
    if (index != -1) t += str.substr(0, index+1);

    while (k < (str.size() - index) - std::to_string(num).size()) {t += '0'; k++;}
    return t += std::to_string(num);
}

int main() {
    std::cout << incrementString("foobar000") << std::endl;
    std::cout << incrementString("foobar001") << std::endl;
    std::cout << incrementString("foobar") << std::endl;
    std::cout << incrementString("") << std::endl;
    std::cout << incrementString("1") << std::endl;
    std::cout << incrementString("009") << std::endl;
}