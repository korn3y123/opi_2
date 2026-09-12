#include <iostream>
#include <random>

int randomNumber(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(min, max);

    return dist(gen);
}

int main() {
    int number = randomNumber(1, 500);

    std::cout << number << std::endl;

    return 0;
}
