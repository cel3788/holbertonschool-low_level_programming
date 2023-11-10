#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates s1 and the first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: resulting string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	int i = 0;
	unsigned int j = 0;
	int length1 = 0;
	unsigned int length2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
		length1++;
	}
	while (s2[j] && j < n)
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
