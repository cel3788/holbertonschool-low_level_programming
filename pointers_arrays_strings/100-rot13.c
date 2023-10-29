#include "main.h"
/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string
 * Return: string `s` rotated
 */

char *rot13(char *s)
{
    int i;
    char storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    for (i = 0; s[i] != '\0'; i++)
    {
        char *position = strchr(alphabet, s[i]);
        if (position != NULL)
        {
            int index = position - alphabet;
            s[i] = storeh[index];
        }
    }
    return s;
}

