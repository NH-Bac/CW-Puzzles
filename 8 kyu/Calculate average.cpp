#include <iostream>
#include <vector>
#include <numeric>

double calcAverage(const std::vector<int>& values){
    return accumulate(values.begin(), values.end(), 0)/static_cast<float>(values.size());
}
int main() {
    std::cout << calcAverage({3,2,5,1}) << std::endl;
}