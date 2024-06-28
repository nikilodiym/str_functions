#include "str.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

    int choice;
    char str[] = "Hello, World!";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        printf("String length: %d\n", string_length(str));
        break;
    default:
        printf("Invalid choice!\n");
        break;
    }

	return 0;
}