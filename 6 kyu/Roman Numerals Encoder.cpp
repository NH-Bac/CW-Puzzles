#include <iostream>
#include <string>

std::string solution(int number){
    std::string roman;
    while (number != 0) {
         while (number >= 1000) {roman.push_back('M');
                number -= 1000;
        }while (number >= 900) {roman.push_back('C');roman.push_back('M');
                number -= 900;
        }while (number >= 500) {roman.push_back('D');
                number -= 500;
        }while (number >= 400) {roman.push_back('C');roman.push_back('D');
                number -= 400;
        }while (number >= 100) {roman.push_back('C');
                number -= 100;
        }while (number >= 90) {roman.push_back('X');roman.push_back('C');
                number -= 90;
        }while (number >= 50) {roman.push_back('L');
                number -= 50;
        }while (number >= 40) {roman.push_back('X');roman.push_back('L');
                number -= 40;
        }while (number >= 10) {roman.push_back('X');
                number -= 10;
        }while (number >= 9) {roman.push_back('I');roman.push_back('X');
                number -= 9;
        }while (number >= 5) {roman.push_back('V');
                number -= 5;
        }while (number >= 4) {roman.push_back('I');roman.push_back('V');
                number -= 4;
        }while (number >= 1) {roman.push_back('I');
                number -= 1;
        }
    }
    return roman;
}

int main () {
    std::cout << solution(789) << std::endl;
    return 0;
}