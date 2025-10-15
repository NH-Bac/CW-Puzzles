#include <iostream>
#include <vector>

float find_uniq(const std::vector<float> &v)
{
    if (v[0] != v[1] && v[0] != v[2]) return v[0];
    for (float i : v) {if (i != v[0]) return i;} 
}
int main() {
    std::cout << find_uniq({1,1,1,1,1,2,3,3,2,5,1,1});
}