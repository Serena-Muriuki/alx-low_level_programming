#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (men);
}
