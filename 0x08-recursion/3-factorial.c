#include "main.h"

/**
 * factorial - prints the factor number.
 * @n: incoming integer.
 *
 * Return: integer.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
