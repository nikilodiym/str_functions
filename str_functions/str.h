#ifndef STR_H
#define STR_H

int string_length(const char* str);
char* string_copy(char* str1, const char* str2);
char* string_concat(char* str1, const char* str2);  
const char* string_find_char(const char* str, char s);
const char* string_find_substr(const char* str1, const char* str2);

#endif
