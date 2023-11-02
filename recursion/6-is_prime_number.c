#include "main.h"

/**
 * is_prime_number - Determines if a number is prime.
 * @n: The number to check for primality.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (helper_prime(n, 2, n / 2));
}

/**
 * helper_prime - Helper function to check primality recursively.
 * @n: The number to check for primality.
 * @i: Current divisor to check.
 * @limit: Maximum divisor to check (n / 2).
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int helper_prime(int n, int i, int limit)
{
	if ((n % i == 0 && i <= limit) || n < 2)
		return (0); // n is not prime
	else if (i <= limit)
		return (helper_prime(n, i + 1, limit)); // Continue checking with the next divisor
	else
		return (1); // n is prime
}

