
// Developed by Gulshan for Google Apprenticeship 2025

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "Guess a number between 1 and 100\n";

    do {//Loop
        cout << "Enter your guess: ";
        cin >> guess;//Input Handling
        attempts++;

        if (guess > number) {//Conditionals
            cout << "Too high!\n";
        } else if (guess < number) {
            cout << "Too low!\n";
        } else {
            cout << "Congratulations! You guessed it in " << attempts << " tries.\n";
        }
    } while (guess != number);

    return 0;
}