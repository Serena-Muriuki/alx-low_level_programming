#include "main.h"

/**
 * _strchr - finds a charcater in a string.
 * @s: the string.
 * @c: the character.
 *
 * Return: s if c is found and null if not.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}

