#include <iostream>

std::string to_camel_case(std::string text) {
    std::string str;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == '-' || text[i] == '_') {
            text[i+1] = std::toupper(text[i+1]);
            continue;
        }
        str += text[i];
    }
    return str;
}

int main() {
    std::cout << to_camel_case("the-stealth-warrior");
}