#include <iostream>
#include <numeric>
#include <vector>

std::string odd_or_even(const std::vector<int> &arr)
{
    int sum;
    for (auto& n : arr) sum+=n;
    return sum%2 == 0 ? "even" : "odd";
}

int main() {
    std::cout << odd_or_even({1,2,3,4});
}