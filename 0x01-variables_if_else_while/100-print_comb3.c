#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c1 = 48;
	int c2 = 49;

	while (c1 <= 56)
	{
		while (c2 <= 57)
		{
			putchar(c1);
			putchar(c2);
			if ((c1 != 56) || (c2 != 57))
			{
				putchar(',');
				putchar(' ');
			}
			c2++;
		}
		c1++;
		c2 = c1 + 1;
	}
	putchar('\n');
	return (0);
}
