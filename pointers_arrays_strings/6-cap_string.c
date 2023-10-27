#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str) {
    int index = 0;

    while (str[index]) {
        // Check if the current character is a lowercase letter
        if (str[index] >= 'a' && str[index] <= 'z') {
            // Capitalize the letter
            str[index] -= 32;
        }

        // Move to the next character
        index++;
    }

    return str;
}

