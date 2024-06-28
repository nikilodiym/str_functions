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

void string_copy(char* dest, const char* src) {
	int i = 0;
	while (src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/// <summary>
/// The function converts the string to lowercase
/// </summary>
/// <param name="str">The string</param>