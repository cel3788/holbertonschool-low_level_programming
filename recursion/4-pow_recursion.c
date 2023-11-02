#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: Number Integer
 * @y: Power
 *
 * Return: Result of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
       	{
		return (-1); /* Error condition for negative exponent */
       	}
	else if (y == 0)
	{
	return (1);  /* Anything raised to the power of 0 is 1 */
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
