//https://www.codewars.com/kata/525c7c5ab6aecef16e0001a5/train/cpp

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <algorithm>

long parse_int(std::string number) {
    std::unordered_map<std::string, int> n = {
        {"zero",0},{"one",1},{"two",2},{"three",3},{"four",4},{"five",5},
        {"six",6},{"seven",7},{"eight",8},{"nine",9},{"ten",10},{"eleven",11},
        {"twelve",12},{"thirteen",13},{"fourteen",14},{"fifteen",15},{"sixteen",16},
        {"seventeen",17},{"eighteen",18},{"nineteen",19},{"twenty",20},
        {"thirty",30},{"forty",40},{"fifty",50},{"sixty",60},{"seventy",70},
        {"eighty",80},{"ninety",90}
    };
    std::replace(number.begin(), number.end(), '-', ' ');
    std::stringstream ss(number); std::string word;
    long r = 0, cur = 0;

    while (ss >> word) {
        if (word == "and") continue;
        if (n.count(word)) cur += n[word];
        else if (word == "hundred") cur *= 100;
        else if (word == "thousand") {r += cur * 1000; cur = 0;}
        else if (word == "million") {r += cur * 1000000; cur = 0;}
    } 
    r += cur; return r;
}

int main() {
    std::cout << parse_int("two hundred and forty-six");
}