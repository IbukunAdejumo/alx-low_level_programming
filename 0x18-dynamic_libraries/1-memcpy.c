#include "main.h"

/**
 * char * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int 1;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
