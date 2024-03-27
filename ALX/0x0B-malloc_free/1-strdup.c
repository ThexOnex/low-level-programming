#include "main.h"
int _len(char *str){
    int i =0;
    while (*str)
    {
        str++;
        i++;
    }
    return i;
}
char *_strdup(char *str){
    if (!str){
        return NULL;
    }
    int size = _len(str);
    char *newStr = (char *)malloc(sizeof(char)* size + 1);
    if (!newStr){
        return NULL;
    }
    for (int i=0; *(str + i) != '\0'; i++){
        *(newStr + i) = *(str + i);
    }
    // '\0'
    newStr[size] = 0;
    return newStr;
}