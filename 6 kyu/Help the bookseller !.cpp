//https://www.codewars.com/kata/54dc6f5a224c26032800005c/train/cpp

#include <string>
#include <vector>
#include <unordered_map>

class StockList
{
public:
    static std::string stockSummary(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories) {
        std::unordered_map<char, int> map;
        std::string r;
        if (lstOfArt.empty()) return "";
        for (auto t : lstOfArt) {
            map[t[0]] += std::stoi(t.substr(t.find(" ") + 1));
        }
        for (auto i : categories) {
            r += "(" + i + " : " + std::to_string(map[i[0]]) + ") - ";
        } if (r.length() >= 3) r.erase(r.length() - 3); 
        return r;
    };
};

