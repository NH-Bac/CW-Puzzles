#include <algorithm>
#include <iostream>
#include <vector>

int persistence(long long n){
    if (n < 10) return 0;
    int count = 0;
    while (true) {
        std::vector<long long> v;
        v.clear();
        while (n > 0) {
            v.push_back(n%10);
            n /= 10;
        }
        n = v[0];
        for (int i = 1; i <= v.size() - 1; i++) {
            if (i == NULL) break;
            n *= v[i];
        }
        count++;
        if (n < 10) break;
    }
    return count;
}

int main() {
    std::cout << persistence(444) << std::endl;
}
