//https://www.codewars.com/kata/5b190aa7803388ec97000054/train/cpp

#include <algorithm>
#include <iostream>
#include <vector>

int tram(int stops, const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result; result.push_back(0);
    for (int i = 0; i < stops; i++) {
        result.push_back((b[i] - a[i]) + result.back());
    }
    return *std::max_element(result.begin(), result.end());
}

int main() {
    std::cout << tram(4, {0, 2, 4, 4}, {3, 5, 2, 0}) << std::endl;
}