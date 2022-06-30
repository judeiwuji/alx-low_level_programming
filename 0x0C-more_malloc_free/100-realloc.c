#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: The pointer
 * @old_size: The old memory size
 * @new_size: The new memory size
 *
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;
	unsigned int size, i;

	if (new_size > old_size)
	{
		size = old_size + new_size;
		new_ptr = malloc(size);
		if (new_ptr != NULL)
		{
			for (i = 0; i < old_size; i++)
				*((char *)new_ptr + i) = *((char *)ptr + i);
			free(ptr);
		}
	}
	else if (new_size == old_size)
		return (ptr);
	else
		new_ptr = NULL;

	return (new_ptr);
}
