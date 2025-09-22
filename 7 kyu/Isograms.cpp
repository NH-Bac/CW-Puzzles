#include <iostream>
#include <cstring>

bool IsIsogram (const char *string)
{
    for (int i = 0; i < strlen(string); i++) {
        for (int j = i+1; j < strlen(string); j++) {
            if (string[i]      == string[j] ||
                string[i] + 32 == string[j] ||
                string[i] - 32 == string[j]   ) return false;
        }
    }
    return true;
}
int main() {
    std::cout << IsIsogram("abA") << std::endl;
}