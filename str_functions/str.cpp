#include "str.h"

int string_length(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
/// <summary>
/// The function returns the length of the string
/// </summary>
/// <param name="str">The string</param>
