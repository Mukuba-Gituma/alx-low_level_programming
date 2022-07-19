#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int len, i; /* i holds the length of the source */

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
