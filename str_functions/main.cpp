#include "str.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;
    char str[] = "Hello, World!";
    char buffer[50];
    char ch;
    char substr[50];

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "String Length: " << string_length(str) << endl;
        break;
    case 2:
        cout << "Copied String: " << string_copy(buffer, str) << endl;
        break;
    case 3:
        string_copy(buffer, "Hello");
        cout << "Concatenated String: " << string_concat(buffer, ", World!") << endl;
        break;
    case 4:
        cout << "Enter a character to find: ";
        cin >> ch;
        {
            const char* found = string_find_char(str, ch);
            if (found) {
                cout << "Character '" << ch << "' found at position: " << (found - str) << endl;
            }
            else {
                cout << "Character '" << ch << "' not found!" << endl;
            }
        }
        break;
    case 5:
        cout << "Enter a substring to find: ";
        cin.ignore();
        cin.getline(substr, 50);
        {
            const char* found_substr = string_find_substr(str, substr);
            if (found_substr) {
                cout << "Substring \"" << substr << "\" found at position: " << (found_substr - str) << endl;
            }
            else {
                cout << "Substring \"" << substr << "\" not found!" << endl;
            }
        }
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }
    return 0;
}