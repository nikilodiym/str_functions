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

char* string_copy(char* str1, const char* str2) {
    char* ptr = str1;
    while ((*str1++ = *str2++) != '\0');
    return ptr;
}

/// <summary>
/// The function copies the string
/// </summary>
/// <param name="str">The string</param>

char* string_concat(char* str1, const char* str2) {
    char* ptr = str1;
    while (*str1) str1++;
    while ((*str1++ = *str2++) != '\0');
    return ptr;
}

/// <summary>
/// The function concatenates two strings
/// </summary>
/// <param name="str">The string</param>

const char* string_find_char(const char* str, char s) {
    while (*str) {
        if (*str == s) {
            return str;
        }
        str++;
    }
    return 0;
}

/// <summary>
/// The function finds the character in the string
/// </summary>
/// <param name="str">The string</param>