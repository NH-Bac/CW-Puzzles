//https://www.codewars.com/kata/52742f58faf5485cae000b9a/train/cpp

#include <iostream>
#include <string>

std::string format_duration(int s) {\
    if (s == 0) return "now";

    std::string r;
    bool first = false;
    int d[] = {0,0,0,0,0};

    d[0] = s;
    d[1] = d[0]/60, d[0] %= 60;
    d[2] = d[1]/60, d[1] %= 60;
    d[3] = d[2]/24, d[2] %= 24;
    d[4] = d[3]/365, d[3] %= 365;

    for (int i = 0; i <= 4; i++) {
        if (d[i] == 0) continue;

        bool bef = false;
        if (d[i+1] > 0 || i >= 1) bef = true;
        if (bef && i > 0 && !r.empty()) r.insert(0, ", ");

        if (!first && d[i] > 0 && i > 0) {
            for (int j = i - 1; j >= 0; j--) {
                if (d[j] > 0) {
                    r.erase(0, 2);
                    r.insert(0, " and ");
                    first = true; break;
                }
            }           
        }
        if (d[i] > 1) r.insert(0, "s");
        
        switch (i) {
            case 0: r.insert(0, " second") ; break;
            case 1: r.insert(0, " minute"); break;
            case 2: r.insert(0, " hour"); break;
            case 3: r.insert(0, " day"); break;
            case 4: r.insert(0, " year");  break;
        } r.insert(0, std::to_string(d[i]));
    } return r;
}

int main() {
    std::cout << format_duration(62) << std::endl;
    std::cout << format_duration(120) << std::endl;
    std::cout << format_duration(15731080) << std::endl;
}