#include <iostream>
#include <string>

std::string rot13(std::string str) {
    for (int i = 0; i < str.size(); i++) {
        if ('A' <= str[i] && str[i] <= 'M' || 'a' <= str[i] && str[i] <= 'm') str[i] += 13;
        else if ('N' <= str[i] && str[i] <= 'Z' || 'n' <= str[i] && str[i] <= 'z') str[i] -= 13;
    }
    return str;
}
int main() {
    std::cout << rot13("EBG13 rknzcyr.") << std::endl;
}
