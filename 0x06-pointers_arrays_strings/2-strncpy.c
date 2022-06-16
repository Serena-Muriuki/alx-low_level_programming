#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string.
 * @dest: destination where the string is copied;
 * @src: has the string to be copied.
 * @n: The maximum number of bytes to be copied from src.
 *
 * Return: a pointer to the destination.
 */
char *_strncpy(char *dest, char *src, int n)
{
	n = size of(dest);
	strncpy(dest, src, n);
	dest[size of(dest) - 1] = '\0';

	return (dest);
}
