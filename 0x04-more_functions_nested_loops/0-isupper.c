#include "main.h"

/**
 * _isupper - checks if letters are uppercase
 * @c: Input character
 * Return: 1 if c is uppercase 
 * or 0 if otherwise
 */

int _isupper(int c)
{
	char upper = 'A';
	int isupper = 0;

	for (; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
