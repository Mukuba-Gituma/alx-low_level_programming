#include <stdio.h>
/**
 * main - Prints alphabets in lowercase, then in uppercase
 * Return: 0
 */
int main(void)
{
	char low;
	char upper;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');

	return (0);
}
