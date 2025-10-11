//https://www.codewars.com/kata/5324945e2ece5e1f32000370/train/cpp

#include <iostream>
#include <string>

std::string sum_strings(const std::string& a, const std::string& b) {
    std::string r; bool remember = false; int n;
    int size = std::max(a.size(), b.size());
    
    std::string aa = std::string(size - a.size(), '0') + a;
    std::string bb = std::string(size - b.size(), '0') + b;
    
    for (int i = size - 1; i >= 0; i--) {
        n = (aa[i] - '0') + (bb[i] - '0');

        if (remember) {
            n += 1;
            remember = false;
        } if (n >= 10) {
            n = n%10;
            remember = true;
        }
        r.insert(0, std::to_string(n));
    }
    if (remember) r.insert(0, "1");
    return r;
}

int main() {
    std::cout << sum_strings("99", "1");
}