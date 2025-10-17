//https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0/train/cpp

#include <string>
#include <iostream>

using namespace std; 

string sliceString (string str)
{
    return str.substr(1, str.size()-2);
}

int main() {
    cout << sliceString("eloquent");
}