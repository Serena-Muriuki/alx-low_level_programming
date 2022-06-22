#include "main.h"

/**
 * _memcpy - copies a value from source to destination.
 * @dest: destination.
 * @src: source to copy from.
 * @n: the index.
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
