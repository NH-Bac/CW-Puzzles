//https://www.codewars.com/kata/5550d638a99ddb113e0000a2

#include <vector>

std::vector<int> josephus(std::vector<int> items, int k) {
    std::vector<int> r; int i = 0;
    while (!items.empty()) {
        i = (i+k-1) % items.size();
        r.push_back(items[i]);
        items.erase(items.begin()+i);
    } return r;
}
int main() {
    josephus({1,2,3,4,5,6,7,8,9,10}, 2);
}