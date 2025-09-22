#include <iostream>

std::string to_alternating_case(const std::string& str)
{
    std::string alternating_case;
    for (int i = 0; i < str.size(); i++) {
        if (std::isupper(str[i]))
            {alternating_case.push_back(std::tolower(str[i]));}
        else if (std::islower(str[i]))
            {alternating_case.push_back(std::toupper(str[i]));}
        else
            {alternating_case.push_back(str[i]);}
    }
    std::cout << str << std::endl;
    std::cout << alternating_case;
    return alternating_case;
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    to_alternating_case(str);
}

