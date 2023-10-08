#include "main.h"
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void  *p;
	unsigned int i;
	
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);

	}
	else if (new_size == old_size)
	
		return (ptr);
	
	else if (new_size == 0 && ptr != NULL)
	{ 
		free(ptr);
		return (NULL);
	}
	else
	{
		p = malloc(new_size);

        	if (p != NULL)
	        {
	    
                    for (i = 0; i < min(old_size, new_size); i++)
 
       	         *((char *)p + i) = *((char *)ptr + i);
           		free(ptr);
	        	return (p);
	    }
        	else
		return (NULL);
	}
}
