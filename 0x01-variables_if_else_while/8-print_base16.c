#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	c = c + 39;
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
