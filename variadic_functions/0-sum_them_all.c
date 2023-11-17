#include "variadic_functions.h"
/**
 * sum_them_all - sums the parameters
 * @n: parameter
 * Return: 0 if n == 0 or sum of parameters otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;

va_list args;

va_start(args, n);

if (n == 0)
{
va_end(args);
return (0);
}

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}

va_end(args);

return (sum);
}

