#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size with char c.
 * @size: Size of an array.
 * @c: specific char to initialize the array with.
 *
 * Return: return pointer to array created.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
