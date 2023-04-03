#include "main.h"

/**
 * _isalpha - Return 1 if char is alphabet, 0 if not.
 * @c: char type letter
 * Return: 1 if it's alpha
 */

int _isalpha(int c)
{
	return (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)));
}
