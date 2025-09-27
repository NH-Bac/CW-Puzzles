//https://www.codewars.com/kata/5a33ec23ee1aaebecf000130/train/cpp

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

std::string countFeelings(std::string s, std::vector<std::string> arr)
{
    std::unordered_map<char, int> freq; int count = 0;
    for (char c : s) freq[c]++;

    for (auto i : arr) {
        std::unordered_map<char, int> fe;
        for (char c : i) {
            fe[c]++;
        }
        bool val = true;
        for (auto [charac, frequen] : fe) {
            if (freq[charac] < frequen) {val = false; break;}
        }
        if (val) count++;
    }
    std::string r = count == 1? " feeling.": " feelings.";
    return std::to_string(count) + r;
}
int main() {
    std::cout << countFeelings("abcdkasdfvkadflongin", {"desire", "joy", "shame", "longing", "fear"}) << std::endl;
}