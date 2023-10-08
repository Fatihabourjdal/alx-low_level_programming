#include "main.h"
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, max = new_size;
	char *oldp = ptr;
	
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);

	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{ 
		return (ptr);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	    {
		    max = old_size;
	    }
        for (i = 0; i < max; i++)
	{
		p[i] = oldp[i];
		free(ptr);
		return (p);
	}
}
