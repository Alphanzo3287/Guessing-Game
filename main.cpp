// Alphanzo Moore

//CIS-5 Online

// September 24, 2023

// Lab 5A: Alphanzo Moore - <Guessing Game>

#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

int main() {
    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 500
    int randomNumber = rand() % 500 + 1;

    int userGuess;
    int numberOfGuesses = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    while (true) {
        cout << "Guess a number between 1 and 500: ";
        cin >> userGuess;
        numberOfGuesses++;

        if (userGuess > randomNumber) {
            cout << "Too high, try again." << endl;
        } else if (userGuess < randomNumber) {
            cout << "Too low, try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << randomNumber << " in " << numberOfGuesses << " guesses." << endl;
            break;
        }
    }

    return 0;
}
