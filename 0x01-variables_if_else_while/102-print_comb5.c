#include <stdio.h>

/**
 * main - Prints all possible of two two-digits numbers
 * Return: 0
 */

int main(void)
{
	int p, q;

	for (p = 0; p < 100; p++)
	{
		for (q =0; q < 100; q++)
		{
			if (p < q && p != q)
			{
				putchar((p / 10) + '0');
				putchar((p % 10) + '0');
				putchar(' ');
				putchar((q / 10) + '0');
				putchar((q % 10) + '0');

				if (!(p == 98 && q == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
