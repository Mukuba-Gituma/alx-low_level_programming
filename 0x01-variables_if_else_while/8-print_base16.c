#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	int i;
	char low;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
	putchar('\n');

	return (0);
}
