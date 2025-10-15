//https://www.codewars.com/kata/52b757663a95b11b3d00062d/train/cpp

#include <iostream>
#include <string>

std::string to_weird_case(std::string str) {
    bool upper = true;
    for (int i = 0; i < str.size(); i++) {
        str[i] = upper? std::toupper(str[i]): std::tolower(str[i]);
        if (str[i] != ' ') upper = !upper; else upper = true;
    } return str;
}

int main() {
    std::cout << to_weird_case("Weird string case") << std::endl;
}