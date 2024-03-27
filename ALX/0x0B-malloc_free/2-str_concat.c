#include "main.h"



char *str_concat(char *s1, char *s2){
    if (!s1){
        s1 = "";
    }
    if (!s2){
        s2 = "";
    }
    int one = 0;
    int two = 0;
    while(s1 && s1[one]){
        one++;
    }
    while (s2 && s2[two])
    {
        two++;
    }
    int last = one + two;
    char *concat = (char *)malloc(sizeof(char)*last+1);
    if (!concat){
        return NULL;
    }
    int i = 0;
    int len = 0;
    while (s1 && s1[i])
    {
        *(concat + i) = *(s1 + i);
        i++;
        len++;
    }
    i = 0;
    while (s2 && s2[i])
    { 
        *(concat + len) = *(s2 + i);
        i++;
        len++;
    }
    *(concat + len) = 0;
    return concat;
}