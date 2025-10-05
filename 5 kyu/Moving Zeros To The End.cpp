//https://www.codewars.com/kata/52597aa56021e91c93000cb0/train/cpp

#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
    std::vector<int> r;
    for (int i : input) {if (i != 0) r.push_back(i);}
    while (r.size() < input.size()) r.push_back(0);
    return r;
}

int main() {
    move_zeroes({1, 2, 0, 1, 0, 1, 0, 3, 0, 1});
}