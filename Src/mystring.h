#include<string.h>
#ifndef MYSTRING_H_
#define MYSTRING_H_

size_t mystrlen(const char *s);
char* mystrcpy(char* dest, const char* src);
char* mystrcat(char *destination, const char *source);
int mystrcmp(const char *str1, const char *str2);

#endif // MYSTRING_H_
