/*
* File: 1-string_nconcat.c
* Author: moaminayadi
*/
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: char
 * @s2: char
 * @n: unsigned int
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2;
char *concat;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
n = len2;

concat = malloc(len1 + n + 1);
if (concat == NULL)
return (NULL);

memcpy(concat, s1, len1);
memcpy(concat + len1, s2, n);
concat[len1 + n] = '\0';

return (concat);
}
