//https://www.codewars.com/kata/525f50e3b73515a6db000b83/train/cpp

#include <iostream>
#include <string>
#include <cstdio>

std::string createPhoneNumber(const int arr[10]) {
    char buf[20];
    std::sprintf(buf, "(%d%d%d) %d%d%d-%d%d%d%d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
    return buf;
}


int main() {
    int n[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::cout << createPhoneNumber(n) << std::endl;
}