#include <stdio.h>

/**
 * main - main block
 * Description: Print 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long int i = 0, j = 1, t;
	int k;

	for (k = 1; k <= 50; k++)
	{
		t = i + j;
		i = j;
		j = t;
		if (k != 50)
		{
			printf("%ld, ", t);
		}
		else
		{
			printf("%ld", t);
		}
	}
	putchar(10);
	return (0);
}
