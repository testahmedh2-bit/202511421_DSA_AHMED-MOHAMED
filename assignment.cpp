#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 1. Chosen number
    int chosenNumber = 7;

    // 2. Variable for user input
    int userGuess;

    // 3. Vector to store all attempts
    vector<int> attempts;

    cout << "Guess the chosen number: ";

    // 4. While loop starts
    while (true) {
        cin >> userGuess;

        // Save the value into the list
        attempts.push_back(userGuess);

        // 5. Comparison logic
        if (userGuess > chosenNumber) {
            cout << "Too high" << endl;
            cout << "Try again: ";
        } else if (userGuess < chosenNumber) {
            cout << "Too low" << endl;
            cout << "Try again: ";
        } else {
            cout << "Correct" << endl;
            break;
        }
    }

    // 6. Display all stored guesses
    cout << "\nYour history of guesses: " << endl;
    for (int i = 0; i < attempts.size(); i++) {
        cout << attempts[i] << " ";
    }
    cout << endl;

    return 0;
}
