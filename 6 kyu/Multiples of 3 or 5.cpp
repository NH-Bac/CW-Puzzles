#include <iostream>

int solution(int number)
{
    if (number < 0) return 0;
    int total = 0;
    for (int i = 1; i < number; i++) {
        if (3*i < number && 3*i%5 != 0) total += 3*i;
        if (5*i < number) total += 5*i;
    }
    return total;
}

int main() {
    std::cout << solution(20) << std::endl;
}