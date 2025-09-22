#include <iostream>

int digital_root(int n)
{
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n%10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

int main() {
    std::cout << digital_root(942) << std::endl;
}