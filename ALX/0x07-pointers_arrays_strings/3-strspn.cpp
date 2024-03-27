#include "main.h"

unsigned int _strspn(const char *s, const char *accept)
{
    int num = -1;
    unsigned int counter = 0;
    while(*s != '\0')
    {
        num = -1;
        for (int i =0; accept[i] != '\0'; i++){
            if (*s == accept[i])
            {
                num = i;
                counter++;
                break;
            }
        }
        if (num == -1){
            break;
        }
        s++;
    }
    return counter;
}