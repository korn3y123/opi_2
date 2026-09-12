#include <iostream>
#include <random>

int main() {
    int min, max;

    std::cout << "Min: ";
    std::cin >> min;

    std::cout << "Max: ";
    std::cin >> max;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(min, max);

    std::cout << "Random number: " << dist(gen) << '\n';

    return 0;
}
