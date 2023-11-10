#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a duplicate of the string
 * @str: string to be duplicated
 * Return: pointer to the duplicated string or NULL if it fails
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	s = malloc(length + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		s[i] = str[i];
	}

	s[length] = '\0';

	return (s);
}
