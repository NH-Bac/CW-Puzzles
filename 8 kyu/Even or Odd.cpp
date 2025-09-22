#include <iostream>
#include <string>

std::string even_or_odd(int number)
{
    int rem = number % 2;
    if (rem == 0) return "Even";
    return "Odd";
}

int main() {
    even_or_odd(2);
}