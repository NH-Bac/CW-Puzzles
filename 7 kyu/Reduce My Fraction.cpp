//https://www.codewars.com/kata/576400f2f716ca816d001614/train/cpp

#include <algorithm>
#include <utility>

std::pair<int, int> reduceFraction(const std::pair<int, int> &f) {
    for (int i = std::min(f.first, f.second); i > 0; i--) {
        if (f.first % i == 0 && f.second % i == 0) {
            return std::make_pair(f.first/i, f.second/i);
        }
    }
}

int main() {
    reduceFraction({45, 120});
}