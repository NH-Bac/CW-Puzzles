#include <iostream>

class BouncingBall
{
public:
    static int bouncingBall(double h, double bounce, double window) {
        int seen = 1;
        h *= bounce;
        if (h < window || bounce >= 1 || bounce < 0) return -1;

        while (h > window) {
            seen+=2;
            h *= bounce;
        }

        std::cout << seen << std::endl;
        return seen;
    }
};

int main() {
    BouncingBall::bouncingBall(3.0, 0.66, 1.5);
}