#include <iostream>
#include <random>
int main() {
    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(1, 100);
    int secret = dist(rng);
    int guess, attempts = 0;

    std::cout << "Guess the number(1-100) : ";

    do {
        std::cin >> guess;
        if (std::cin.fail()) {
            std::cout << "Invalid input! Please enter a number: ";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }
        attempts++;
        if (guess < secret) std::cout << "Its low! Try again: ";
        else if (guess > secret) std::cout << "Its high! Try again: ";
        else std::cout << "Correct! You got it in " << attempts << " attempts." <<std::endl;
    } while (guess != secret);

    return 0;
}

