#include <stdio.h>
/**
 * main - Prints alphabets in lowercase, except q and e
 * Return: 0
 */
int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		if (!(low == 'e' || low == 'q'))
		{
			putchar(low);
		}
		low++;
	}
	putchar('\n');

	return (0);
}
