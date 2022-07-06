#include "main.h"

/**
 * _isalpha - Check main
 * @c: The character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase or 0 if otherwise
 */

int _isalpha(int c)
{
	char lower, upper;
	int i = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
			{
				i = 1;
			}
		}
	}
	return (i);
}
