#include <iostream>

int simpleMultiplication(int a)
{
    return a % 2 == 0 ? a*8 : a*9;
}

int main() {
    std::cout << simpleMultiplication(2);
}