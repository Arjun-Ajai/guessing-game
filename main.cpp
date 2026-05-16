#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "Guess the number (1-100): " << endl;

    do {
        cin >> guess;
        attempts++;
        if (guess < secret) cout << "Too low! Try again: ";
        else if (guess > secret) cout << "Too high! Try again: ";
        else cout << "Correct! You got it in " << attempts << " attempts." << endl;
    } while (guess != secret);

    return 0;
}

