#include <iostream>
#include "calculator.h"
using namespace std;

int main() {
    int choice, x, y;

    cout << "Simple Calculator\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Exit\n";

    while (true) {
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting...\n";
            break;
        }

        cout << "Enter two numbers: ";
        cin >> x >> y;

        switch (choice) {
            case 1: add(10, 5); break;
            case 2: sub(10, 5); break;
            case 3: mul(10, 2); break;
            case 4: divide(10, 2); break;
            default: cout << "Invalid choice!\n"; break;
        }
    }

    return 0;
}
