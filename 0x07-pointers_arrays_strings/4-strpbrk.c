#include "main.h"
#include <stdio.h>

char *_strpbrk(char *s, char *accept){
    int stop = 0;
    while(*s != '\0')
    {
        stop = 0;
        for (int i =0; *(accept + i) != '\0'; i++)
        {
            if (*s == accept[i])
            {
                stop = 1;
                break;
            }
        }
        if (stop == 1)
        {
            return s;
        }
        s++;
    }
}