#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input a character
    cout << "Enter a character: ";
    cin >> ch;

    // Check if it is an alphabet, digit, or special character
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << "The entered character is an alphabet." << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "The entered character is a digit." << endl;
    } else {
        cout << "The entered character is a special character." << endl;
    }

    return 0;
}
