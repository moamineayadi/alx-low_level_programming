#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char stringy[] = "_putchar";
	int i = 0;

	while (stringy[i] != '\0')
	{
		_putchar(stringy[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
