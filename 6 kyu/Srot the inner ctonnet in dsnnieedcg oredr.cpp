//https://www.codewars.com/kata/5898b4b71d298e51b600014b/train/cpp

#include <algorithm>
#include <iostream>
#include <string>

std::string sortTheInnerContent(std::string words) {
    std::string text, result;

    for (int i = 0; i <= words.length(); i++) {
        if (words[i] == ' ' || i == words.length()) {
            if (text.length() <= 2) {
                result += text;
            } else {
                char first = text.front();
                char last  = text.back();

                std::string mid = text.substr(1, text.length() - 2);
                sort (mid.rbegin(), mid.rend());

                result += first + mid + last;
            }
            if (i != words.length()) result += ' '; text.clear();
        }
        else text+=words[i];
    }
    return result;
}
int main() {
    std::cout << sortTheInnerContent("sort the inner content in descending order") << std::endl;
}