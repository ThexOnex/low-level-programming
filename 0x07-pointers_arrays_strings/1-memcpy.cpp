#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n){
    char temp;
    for (int i =0; i < n; i++){
        *(dest + i) = *(src + i);
    }
    return dest;
}