#include "main.h"
#include <stdio.h>

/**
 * main - Point d'entrée
 *
 * Return: Toujours 0
 */
int main(void)
{
    char character; // Changez le nom de la variable en 'character'

    character = 'A';
    printf("%c: %d\n", character, _isupper(character));
    character = 'a';
    printf("%c: %d\n", character, _isupper(character));
    return (0);
}

