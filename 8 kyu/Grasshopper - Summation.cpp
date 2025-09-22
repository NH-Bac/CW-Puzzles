#include <iostream>

int summation(int num){
    return (num*(1+num))/2;
}

int main() {
    std::cout<<summation(8);
}