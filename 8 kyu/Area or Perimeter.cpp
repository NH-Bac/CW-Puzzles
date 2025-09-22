//https://www.codewars.com/kata/5ab6538b379d20ad880000ab/train/cpp

#include <iostream>
int area_or_perimeter(int l , int w) {
    return l==w? l*w : l*2+w*2;
}
int main() {
    std::cout << area_or_perimeter(5, 10) << std::endl;
}
