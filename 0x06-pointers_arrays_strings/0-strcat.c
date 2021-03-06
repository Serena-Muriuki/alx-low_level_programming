#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates the string pointed to by @src.
 * @dest: points the string to be concatenated.
 * @src: source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
