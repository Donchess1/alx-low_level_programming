#include <stdlib.h>

#include "main.h"

/**
 *malloc_checked - allocates memory using malloc
 * @b: amount of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)

{
	void *A;

	A = malloc(b);
	if (A == NULL)
		exit(98);


	return (A);

}
