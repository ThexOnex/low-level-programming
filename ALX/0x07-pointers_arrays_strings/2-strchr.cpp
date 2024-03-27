#include "main.h"
#include <string.h>

const char *_strchr(const char *s, char c){
    while (*s != '\0')
    {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return NULL;
}