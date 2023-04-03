#include "main.h"

/**
 * print_times_table - print times table from 0 to n
 * @n: int type number
 * Return: void
 */

void print_times_table(int n)
{
	int i;
	int j;

	if ((n <= 15) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				if ((i * j) <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j) + '0');
				}
				else if ((i * j) <= 99)
				{
					_putchar(' ');
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
				else
				{
					_putchar(((i * j) / 100) + '0');
					_putchar((((i * j) % 100) / 10) + '0');
					_putchar((((i * j) % 100) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
