#include "main.h"
#include <iostream>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    const char *s = "helloo123";
    const char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}