#include "main.h"

/**
 * jack_bauer - prints very min of the day
 * Return: Void nothing
 */

void jack_bauer(void)
{
	int lh;
	int h;
	int lm;
	int m;
	int bound = 9;

	for (lh = 0; lh <= 2; lh++)
	{
		if (lh == 2)
		{
			bound = 3;
		}
		for (h = 0; h <= bound; h++)
		{
			for (lm = 0; lm <= 5; lm++)
			{
				for (m = 0; m <= 9; m++)
				{
					_putchar(lh + '0');
					_putchar(h + '0');
					_putchar(':');
					_putchar(lm + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
			}
		}
	}

}
