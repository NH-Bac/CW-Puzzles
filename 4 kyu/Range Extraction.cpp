//https://www.codewars.com/kata/51ba717bb08c1cd60f00002f/train/cpp

#include <iostream>
#include <string>
#include <vector>

std::string range_extraction(std::vector<int> a) {
    std::string r; bool range = false;

    for (int i = 0; i < a.size(); i++) {
        if (range) {
            if (a[i+1] == a[i]+1) continue;
            else {
                range = false;
                r += '-';
            }
        } r += std::to_string(a[i]);
        
        if (a[i+1] == a[i]+1 && a[i+2] == a[i]+2) {
            range = true;
        } else r += ',';  
    } r.pop_back();
    return r;
}

int main() {
    std::cout << range_extraction({-6,-3,-2,-1,0,1,3,4,5,7,8,9,10,11,14,15,17,18,19,20}) << std::endl;
    // "-6,-3-1,3-5,7-11,14,15,17-20"
}