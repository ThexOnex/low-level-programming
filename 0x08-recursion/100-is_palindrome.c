#include "main.h"

int _len(char *s){
    int i =0;
    while (*s != '\0'){
        i++;
        s++;
    }
    return i;
}

int is_palindrome(char *s){
    char *str;
    str = s;
    return _paralelle(s, str, 0);
}
int _paralelle(char *s, char *str, int m){
    int size = _len(s);
    if (size < m){
        return 1;
    }
    if (s[m] == str[size - 1 -m]){
        return _paralelle(s,str, m+1);
    }
    return 0;
}