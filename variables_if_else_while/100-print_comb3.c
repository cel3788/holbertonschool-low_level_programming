#include <stdio.h>

int main(void)
{
    int digit1, digit2;

    for (digit1 = 0; digit1 < 10; digit1++)
    {
        for (digit2 = digit1 + 1; digit2 < 10; digit2++)
        {
            // Print the first digit (digit1)
            putchar((digit1 % 10) + '0');

            // Print the second digit (digit2)
            putchar((digit2 % 10) + '0');

            if (digit1 == 8 && digit2 == 9)
                continue;

            // Otherwise, print a comma and a space to separate the numbers
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');

    return (0);
}

