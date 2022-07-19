#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * it will use atmost n bytes from src
 * @dest: pointers to destination string
 * @src: pointer to source string
 * @n: number of bytes to be concatenated
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen, j;
/* j is a counter for n bytes of src to be concatenated */
/* dlen is the length of destination string */

	dlen = 0;
	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, dlen++)
	{
		dest[dlen] = src[j];
	}
	dest[dlen] = '\0';
	return (dest);
}
