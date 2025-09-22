//https://www.codewars.com/kata/5375f921003bf62192000746/train/cpp

#include <algorithm>
#include <iostream>
#include <string>

std::string abbreviate(std::string sentence) {
    std::string text, result;

    for (int i = 0; i <= sentence.length(); i++) {
        if (!std::isalpha(sentence[i]) || sentence[i] == sentence.length()) {

            if (text.length() <= 3) result += text;

            else {
                result += std::string() + text.front() + std::to_string(text.length()-2) + text.back();
            }
            if (i < sentence.length()) result += sentence[i];

            text.clear();
        }
        else text.push_back(sentence[i]);
    }
    return result;
}

int main() {
    std::cout << abbreviate("internationalization") << std::endl;
}