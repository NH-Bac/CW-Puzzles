#include <iostream>
#include <random>
#include <string>

int dice();
void move();

class SnakesLadders {
    int pos1 = 0;
    int pos2 = 0;
    int PlayerWin = 0;
    bool isP1 = true;
    bool gameOver = false;
public:
    SnakesLadders() = default;
    std::string play(int die1, int die2) {
        if (gameOver) return "Game over!";
        int pos = isP1 ? pos1: pos2;
        pos = PlayerMove(pos, die1 + die2);
        (isP1 ? pos1: pos2) = pos;
        if (pos == 100) {
            gameOver = true;
            return std::string("Player ") + (isP1 ? "1" : "2") + " Wins!";
        }
        std::string result = std::string("Player ") + (isP1 ? "1" : "2") + " is on square " + std::to_string(pos);
        if (die1 != die2) isP1 = !isP1;
        return result;
    };
    int PlayerMove(int pos, int move) {
        pos += move;
        if (pos > 100) pos = 200-pos;
        switch (pos) {
            case 2: return 38;
            case 7: return 14;
            case 8: return 31;
            case 15: return 26;
            case 16: return 6;
            case 21: return 42;
            case 28: return 84;
            case 36: return 44;
            case 46: return 25;
            case 49: return 11;
            case 51: return 67;
            case 62: return 19;
            case 64: return 60;
            case 71: return 91;
            case 74: return 53;
            case 78: return 98;
            case 87: return 94;
            case 89: return 68;
            case 92: return 88;
            case 95: return 75;
            case 99: return 80;
            default: return pos;
        }
    }
};

int main() {
    SnakesLadders game = SnakesLadders();
    std::cout << game.play(1, 1) << std::endl;
    std::cout << game.play(1, 5) << std::endl;
    std::cout << game.play(6, 2) << std::endl;
    std::cout << game.play(1, 1) << std::endl;
}

int dice() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> die( 1, 6 ) ;
    return die(gen);
}
