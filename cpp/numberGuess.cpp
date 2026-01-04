
// Number Guessing Game
// Developed by Gulshan
// Simple CLI project to practice loops, conditionals, and input handling

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed random number generator once at program start
    srand(static_cast<unsigned int>(time(nullptr)));

    int targetNumber = rand() % 100 + 1;
    int userGuess = 0;
    int attemptCount = 0;

    cout << "Guess a number between 1 and 100\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        // Basic input validation
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter a valid number.\n";
            continue;
        }

        attemptCount++;

        if (userGuess > targetNumber) {
            cout << "Too high!\n";
        } else if (userGuess < targetNumber) {
            cout << "Too low!\n";
        } else {
            cout << "Congratulations! You guessed it in "
                 << attemptCount << " attempts.\n";
            break;
        }
    }

    return 0;
}
