// lab201.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Timothy Huff
//Lab201R 0001
//8-28-2024

//Timothy Huff
//Lab201R 0001
//8-28-2024

//Timothy Huff
//Lab201R 0001
//8-28-2024

#include <iostream>
using namespace std;

int main() {
    // There is a logic error in this program.
    // Correct this error, test your changes, and commit the changes
    int guess = 0, solution = 15;
    char answer = 'y';
    cout << "Would you like to play? "; //corrected 222 to to
    cin >> answer;
    answer = tolower(answer);
    while (answer != 'y' || answer != 'n') { //added loop to correct invalid inputs
        cout << "Invalid choice. Enter 'y' or 'n': ";
        cin >> answer;
        answer = tolower(answer); // corrected for upper
        if (answer == 'y' || answer == 'n') {
            while (answer == 'y') {
                cout << "Enter your guess between 0 & 50: ";
                cin >> guess;
                while (guess != solution) { //created loop for guessing
                    if (guess > solution) {
                        cout << "sorry - your guess is too big\n";
                    }
                    else if (guess < solution) {
                        cout << "sorry - your guess is too low\n";
                    }
                    else if (guess == solution) {
                    }
                    else
                        cout << "invalid input. guess again\n";
                    cin >> guess;
                }
                cout << "You got it!\n"; //added statement for winning
                cout << "Guess again? "; {
                    cin >> answer;
                    answer = tolower(answer);// changed character to account for upper case
                }

            }
        }
    }
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
