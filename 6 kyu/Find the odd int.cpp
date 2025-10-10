//https://www.codewars.com/kata/54da5a58ea159efa38000836/train/cpp

#include <iostream>
#include <vector>
#include <unordered_map>

int findOdd(const std::vector<int>& numbers){
    std::unordered_map<int, int> count;
    for (int i : numbers) count[i]++;
    for (auto c : count) {
        if (c.second %2 == 1) return c.first;
    } return 0;
}

int main() {
    std::cout << findOdd({20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5}) << std::endl;
}