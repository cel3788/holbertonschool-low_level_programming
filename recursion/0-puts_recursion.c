#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 */
void _puts_recursion(char *s)
{
    if (*s == 0)
    {
        _putchar('\n');
        return;
    }
    _putchar(*s);
    _puts_recursion(s + 1);
}

