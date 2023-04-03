#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory area @src
 * @dest: pointer
 * @src: pointer
 * @n: positive int
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
