#include <stdlib.h>
#include "main.h"

/**
 **str_concat - concatenates strings
 * @s1: first string
 * @s2: second string
 * Return: resulting string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	int i = 0;
	int j = 0;
	int length1 = 0;
	int length2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
		length1++;
	}
	while (s2[j])
	{
		j++;
		length2++;
	}
	res = malloc(sizeof(char) * (length1 +  length2 + 1));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
	{
		res[i] = s1[i];
	}
	for (j = 0; j < length2; j++)
	{
		res[i + j] = s2[j];
	}
	res[i + j] = '\0';
	return (res);
}
