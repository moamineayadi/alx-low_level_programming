#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c1 = 48;
	int c2 = 49;
	int c3 = 50;

	while (c1 <= 55)
	{
		while (c2 <= 56)
		{
			while (c3 <= 57)
			{
				putchar(c1);
				putchar(c2);
				putchar(c3);
				if ((c1 != 55) || (c2 != 56) || (c3 != 57))
				{
					putchar(',');
					putchar(' ');
				}
				c3++;
			}
			c2++;
			c3 = c2 + 1;
		}
		c1++;
		c2 = c1 + 1;
		c3 = c2 + 1;
	}
	putchar('\n');
	return (0);
}
