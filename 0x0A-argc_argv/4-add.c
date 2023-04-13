/*
* File: 4-add.c
* Author: moamineayadi
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds numbers
* @argc: int
* @argv: array
*
* Return: int
*/

int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argc > 1)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
		argc--;
	}
	printf("%i\n", sum);
	return (0);
}
