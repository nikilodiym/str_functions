#include "str.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;
    char str[] = "Hello, World!";
    char buffer[50];

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        printf("String Length: %d\n", string_length(str));
        break;
    case 2:
        printf("Copied String: %s\n", string_copy(buffer, str));
        break;
    default:
        printf("Invalid choice!\n");
        break;
    }

	return 0;
}