#include "main.h"

char *create_array(unsigned int size, char c){
    if (size == 0)
        return NULL;
    char *str = (char *)malloc(size * sizeof(char));
    if(!str)
        return NULL;
    int i = 0;
    while(i < size){
        *(str + i) = c;
        i++;
    }
    return str;
}