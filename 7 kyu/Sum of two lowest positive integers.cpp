#include <algorithm>
#include <iostream>
#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    sort(numbers.begin(), numbers.end());
    return numbers[0] + numbers[1];
}

int main() {
    sumTwoSmallestNumbers({1,5,7,23,9});
}