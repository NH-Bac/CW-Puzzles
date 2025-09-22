#include <iostream>
#include <string>

std::string reverse_words(const std::string& str) {
    std::string reversed_words;
    for (int i = str.length(); i >= -1; i--) {
        if (str[i] == ' ' || i == -1) {
            int j = i+1;
            while (j < str.length() && str[j] != ' ') {
                reversed_words+=str[j];
                j++;
            }
            reversed_words+=' ';
        }
    }
    reversed_words.pop_back();
    return reversed_words;
}
int main() {
    std::cout << reverse_words("yoda doesn't speak like this") << std::endl;
}