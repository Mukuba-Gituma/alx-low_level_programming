#include "main.h"

/**
 * _islower - Check main
 * @c: The character to be checked
 * Return: 1 if c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	char low;
	int i = 0;

	for (low = 'a'; low = 'z'; low++)
	{
		if (low == c)
		{
			i = 1;
		}
	}

	return (i);
}
