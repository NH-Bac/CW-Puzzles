#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <string>

bool is_pangram(const std::string& s) {
    std::string str = s;
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::unordered_map<char, int> map;
    std::string ans;

    int ascii = 0;

    for (char i : str) {
        if (map.find(i) == map.end()) {
            ans.push_back(i);
            map[i]++;
        }
    }
    for (int i = 0; i < ans.size(); i++) {
        if (97 <= (int)ans[i] && (int)ans[i] <= 122) {
            ascii += (int)ans[i];
        }
    }
    if (ascii == 2847) return true;
    return false;
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    is_pangram(str);
}