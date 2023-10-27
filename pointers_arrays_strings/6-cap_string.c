#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str) {
    int index = 0;
    int capitalizeNext = 1; // Flag to indicate if the next letter should be capitalized

    while (str[index]) {
        if (str[index] >= 'a' && str[index] <= 'z') {
            if (capitalizeNext) {
                str[index] -= 32; // Capitalize the letter
                capitalizeNext = 0; // Reset the flag
            }
        } else {
            // Check for word separators
            if (strchr(" \t\n,;.!?\"(){}", str[index]) != NULL) {
                capitalizeNext = 1; // Set the flag to capitalize the next letter
            }
        }

        index++;
    }

    return str;
}

