#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
    int length = 0;
    char *start = s;
    char *end = s;

    if (s)
    {
        while (*end)
        {
            end++;
            length++;
        }

        end--;

        while (start < end)
        {
            char temp = *start;
            *start = *end;
            *end = temp;
            start++;
            end--;
        }
    }
}

