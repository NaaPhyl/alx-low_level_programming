#include "main.h"
#include <stdio>
#include <stdlib.h>

/**
 * malloc checked - array that prints a string
 * @b - number of memory
 * Rteurn: void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
	exit(98);
	}

	return (p);
}
