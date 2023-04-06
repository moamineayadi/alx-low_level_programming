/*
 * File: 100-is_palindrome.c
 * Author: moamineayadi
*/

/**
 *	_compa - Compare the strings
 *
 *	@ch: char
 *	@d: char
 *
 *	Return: int
 */

int _compa(char *ch, char *d)
{
	if (*ch == '\0')
	{
		return (1);
	}
	if (*ch == *d)
	{
		ch++;
		d--;
		return (_compa(ch, d));
	}
	return (0);
}



/**
 *	_is_same_reverse - reverse the string
 *
 *	@ch: char
 *
 *	Return: char
 */

char *_is_same_reverse(char *ch)
{
	if (*ch != '\0')
	{
		ch++;
		return (_is_same_reverse(ch));
	}
	else
	{
		ch--;
		return (ch);
	}
}



/**
 *	is_palindrome - function checks string palindrom
 *
 *	@s: char
 *
 *	Return: int
 */

int is_palindrome(char *s)
{
	char *c = _is_same_reverse(s);

	return (_compa(s, c));
}
