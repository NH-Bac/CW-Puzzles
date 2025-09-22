#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>

bool isValidMessage(const std::string& str) {
    int count = 0;
    for (int i = 0; i <= str.size(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            count = stoi(str.substr(i));
            std::cout << count << std::endl;
            std::cout << str[i+count+1] << std::endl;
            if (count >= 10)  i++;
            if ((str[i+count+1] < '0' || str[i+count+1] > '9') &&
            str[i+count+1] != NULL || (str[str.length()-1] >= '0' && str[str.length()-1] <= '9')) return false;
            if (str[i+count+1] == NULL) {
                if (str[i+count] == NULL) return false;
            }
            if (str[i+count+1] >= '0' && str[i+count+1] <= '9') {
                if (str[i+count] >= '0' && str[i+count] <= '9') return false;
            }
        }
    }
    return true;
}

int main() {
    std::cout << isValidMessage("4vLbi9PbOjkch") << std::endl;
}