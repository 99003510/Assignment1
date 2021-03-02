#include "mystring.h"
size_t mystrlen(const char *s){
    return strlen(s);
}
char* mystrcpy(char* dest, const char* src){
    return strcpy(dest,src);
}
char* mystrcat(char *destination, const char *source){
    return strcat(destination,source);
}
int mystrcmp(const char *str1, const char *str2 ){
    return strcmp(str1,str2);
}
