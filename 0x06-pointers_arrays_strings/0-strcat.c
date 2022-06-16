#include "main.h"

/**
 * strcat - concatenates the string pointed to by @src.
 * @dest: points the string to be concatenated.
 * @src: source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++] != '\0')
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	dest[index] = '\0';
	return (dest);
}
