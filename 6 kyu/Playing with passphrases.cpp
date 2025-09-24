//https://www.codewars.com/kata/559536379512a64472000053/train/cpp

#include <iostream>
#include <string>
#include <algorithm>

class PlayPass
{
public:
    static std::string playPass(const std::string &s, int n) {
        std::string res;

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];

            if (isalpha(c)) {
                char base = std::isupper(c) ? 'A' : 'a';
                c = base + (c - base + n) % 26;
                c = i % 2 == 0? std::toupper(c): std::tolower(c);
            }
            else if ('0' <= c && c <= '9') {
                c = '0' + (9 - (c - '0'));
            }
            res += c;
        }
        std::reverse(res.begin(), res.end());
        return res;
    };
};

int main() {
    std::cout << PlayPass::playPass("FFF", 20) << std::endl;
}