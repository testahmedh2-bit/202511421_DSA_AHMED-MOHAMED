#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int chosenNumber = 7;

    
    int userGuess;

    vector<int> attempts;

    cout << "Guess the chosen number: ";

    while (true) {
        cin >> userGuess;

        attempts.push_back(userGuess);

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
    
    cout << "\nYour history of guesses: " << endl;
    for (int i = 0; i < attempts.size(); i++) {
        cout << attempts[i] << " ";
    }
    cout << endl;

    return 0;
}
