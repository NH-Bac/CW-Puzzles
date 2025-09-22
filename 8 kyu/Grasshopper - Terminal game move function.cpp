//https://www.codewars.com/kata/563a631f7cbbc236cf0000c2/train/cpp

#include <iostream>

int move(int position, int roll) {
    return position + 2*roll;
}

int main() {
    std::cout << move(3, 6) << std::endl;
}