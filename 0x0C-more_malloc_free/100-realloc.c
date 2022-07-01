#include "main.h"
#include <stdlin.h>

/**
 * _realloc - function that relocates a memory block
 * @ptr: void pointer to the allocated memory area
 * @old_size: old size of allocated memory
 * @new_size: new size of allocated memory
 *
 * Return: void pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
/* allocates new dynamic memory without initialization */
	if (new_size > old_size)
	{
		free(ptr);
		ptr = (int *) malloc(new_size);

		if (ptr == NULL)
			return (NULL);
		else
			return (ptr);
	}
/*call is equivalent to malloc(new_size)*/
	if (ptr == NULL)
	{
		return (ptr = (int *) malloc(new_size));

		if  (ptr == NULL)
			return (NULL);
	}
/*returns a void pointer*/
	if (new_size == old_size)
		return (ptr);
/*freeing pointer*/
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
