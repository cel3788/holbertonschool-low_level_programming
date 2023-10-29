#include "main.h"
/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string
 * Return: string `s` rotated
 */

char *rot13(char *s)
{
    int i;
    char storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
    char storel[] = "nopqrstuvwxyzabcdefghijklm";

    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = storeh[s[i] - 'A'];
            }
            else
            {
                s[i] = storel[s[i] - 'a'];
            }
        }
    }
    return s;
}

