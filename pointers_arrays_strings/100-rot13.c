#include "main.h"
#include <stdio.h>

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string
 * Return: string `s` rotated
 */
char *rot13(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        char c = s[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            char base = (c >= 'A' && c <= 'Z') ? 'A' : 'a';
            s[i] = (c - base + 13) % 26 + base;
        }
    }
    return s;
}

int main()
{
    char input[] = "Hello, World!";
    printf("Original: %s\n", input);
    rot13(input);
    printf("ROT13 Encoded: %s\n", input);
    return 0;
}

