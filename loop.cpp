#include <iostream>
using namespace std;

int main() {
    int choice = 0;
    int number;

    while (choice != 3) {
        cout << "\nMenu:\n";
        cout << "1. Check if a number is positive, negative, or zero\n";
        cout << "2. Print even numbers up to N\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter an integer: ";
            cin >> number;

            // Nested if-else decision
            if (number > 0) {
                cout << number << " is positive." << endl;
            } else if (number < 0) {
                cout << number << " is negative." << endl;
            } else {
                cout << "The number is zero." << endl;
            }

        } else if (choice == 2) {
            cout << "Enter a positive integer N: ";
            cin >> number;

            if (number <= 0) {
                cout << "Please enter a positive number!" << endl;
            } else {
                cout << "Even numbers up to " << number << ": ";
                // for loop to print even numbers
                for (int i = 2; i <= number; i += 2) {
                    cout << i << " ";
                }
                cout << endl;
            }

        } else if (choice == 3) {
            cout << "Exiting program." << endl;

        } else {
            cout << "Invalid choice! Please enter 1, 2, or 3." << endl;
        }
    }

    return 0;
}
