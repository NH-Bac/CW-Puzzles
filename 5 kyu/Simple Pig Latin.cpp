//https://www.codewars.com/kata/520b9d2ad5c005041100000f/train/cpp

#include <iostream>
#include <sstream>

std::string pig_it(std::string str)
{   
    std::stringstream ss(str);
    std::string r, w;
    
    while (ss >> w) {
        bool val = true;
        for (char c : w) {
            if (!isalpha(c)) val = false;
        }
        if (val) r += w.substr(1) + w[0] + "ay ";
        else r += w + " ";
    }
    r.pop_back(); return r;
}
int main() {
    std::cout << pig_it("O tempora o mores !") << std::endl; //hisTay siay ymay tringsay
}