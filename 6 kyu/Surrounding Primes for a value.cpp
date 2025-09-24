//https://www.codewars.com/kata/560b8d7106ede725dd0000e2/train/cpp

#include <array>

bool isPrime(unsigned int n) {
    for (unsigned int i = 2; i*i <= n; i++) if (n % i == 0) return false; return true;
}
std::array<unsigned int, 2> primeBefAft(const unsigned int num) {
    unsigned int bef = num - 1;
    while (!isPrime(bef)) --bef;
    unsigned int aft = num + 1;
    while (!isPrime(aft)) ++aft;

    return {bef, aft};
}

int main() {
    primeBefAft(97);
}