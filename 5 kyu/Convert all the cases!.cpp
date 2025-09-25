//https://www.codewars.com/kata/59be8c08bf10a49a240000b1/train/cpp

#include <iostream>
#include <string>
using namespace std;

string snake(string s);
string camel(string s);
string kebab(string s);

bool isValid(string s) {
    bool uds = false;
    bool Upp = false;
    bool hyp = false;

    for (char i : s) {
        if (isupper(i)) Upp = true;
        if (i == '_')   uds = true;
        if (i == '-')   hyp = true;
    }   if (uds + Upp + hyp <= 1) return true; return false;
}

string changeCase(const string &identifier, const string &targetCase)
{
    if (!isValid(identifier))return "";
    if (targetCase == "snake") return snake(identifier);
    if (targetCase == "camel") return camel(identifier);
    if (targetCase == "kebab") return kebab(identifier);
    return "";
}
string snake(string s) {
    string r;
    for (char i : s) {
        if (isupper(i)) {r += '_'; r += tolower(i);}
        else if (i == '-') r += '_';
        else r += i;
    } return r;
}
string camel(string s) {
    string r;
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == '-' || s[i] == '_') {
            if (i + 1 < s.size()) r += toupper(s[++i]);
        }
        else r += s[i];
    } return r;
}
string kebab(string s) {
    string r;
    for (char i : s) {
        if (isupper(i)) {
            r += '-'; r += tolower(i);
        } else if (i=='_') {
            r += '-';
        } else r += i;
    } return r;
}
int main() {
    cout << changeCase("snakeCase", "snake") << endl;
    cout << changeCase("some-lisp-name", "camel") << endl;
    cout << changeCase("doHTMLRequest", "kebab") << endl;
    cout << changeCase("invalid-inPut_bad", "kebab") << endl;
    cout << changeCase("little-shop-of-horrors", "snake") << endl;
}