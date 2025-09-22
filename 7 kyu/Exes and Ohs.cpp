//https://www.codewars.com/kata/55908aad6620c066bc00002a/train/cpp

#include <iostream>

bool XO(const std::string& str) {
    int countX = 0, countO = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'x' || str[i] == 'X') countX++;
        if (str[i] == 'o' || str[i] == 'O') countO++;
    }
    return countX == countO;
}

int main() {
    std::cout << XO("ooxx") << std::endl;
}