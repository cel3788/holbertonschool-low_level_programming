#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
    if (*s == '\0') // Check if we've reached the end of the string
    {
        _putchar('\n'); // Print a newline character
        return;
    }
    _putchar(*s); // Print the current character
    _puts_recursion(s + 1); // Recursively call _puts_recursion for the next character
}
