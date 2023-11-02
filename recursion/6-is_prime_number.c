#include "main.h"

int checkprime(int n, int i);

/**
 * is_prime_number - checks for prime number
 * @n: number to be checked
 * Return: 1 if the integer is a prime number 0 otherwise
 */
int is_prime_number(int n)
{
        if (n <= 1)
	{
	return (0);
        }

	return (checkprime(n, 2));
}

/**
 * checkprime - checks for prime number
 * @n: number to be checked
 * @i: index
 * Return: the square root of a number
 */

int checkprime(int n, int i)
{
	if (i > n / 2)
	{
		return (1);
        }
	
	if (n % i == 0)
        {
		return (0);
        }
	return (checkprime(n, i + 1));
}
