#include <iostream>
#include <random>

int randomNumber(int minimum, int maximum) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(min, max);

    return dist(gen);
}

int main() {
    int a, b;
    std::cout << "Write minimum: ";
    std::cin >> a;

    std::cout << std::endl << "Write maximum: ";
    std::cin >> b;

    int number = randomNumber(a, b);

    std::cout << std::endl << "Random number: " << number << std::endl;

    return 0;
}
