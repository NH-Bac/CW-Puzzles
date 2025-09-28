//https://www.codewars.com/kata/550f22f4d758534c1100025a/train/cpp

#include <iostream>
#include <vector>

class DirReduction
{
public:
    static bool Oppose(std::string a, std::string b) {
        return (a == "NORTH" && b == "SOUTH") || (a == "SOUTH" && b == "NORTH") ||
               (a == "EAST"  && b == "WEST")  || (a == "WEST"  && b == "EAST");
    }
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr) {
        std::vector<std::string> res;
        
        for (auto &dir : arr) {
            if (!res.empty() && DirReduction::Oppose(res.back(), dir)) 
                 res.pop_back();
            else res.push_back(dir);
        } 
        return res;
    }   
};


int main() {
    std::vector<std::string> d = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};
    DirReduction::dirReduc(d);
}