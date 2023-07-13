#include <stdlib.h>
#include "main.h"

/**
 * *_memset_int - fills memory with a constant int
 * @s: memory area to be filled
 * @b: int to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
int *_memset_int(int *s, int b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc_int - allocates memory for an array of ints
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc_int(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset_int(ptr, 0, nmemb * size);

	return (ptr);
}
