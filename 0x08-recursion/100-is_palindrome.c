#include "2-strlen_recursion.c"
/**
 * s_cmp - compare a string backward and forward
 * @s: string to compare
 * @inc: integer as forward position
 * @dec: integer as backward position
 * Return: 1 if same and 0 if different
 */
int s_cmp(char *s, int inc, int dec)
{
	if (!s[inc])
		return (1);
	if (s[inc] == s[dec])
		return (s_cmp(s, inc + 1, dec - 1));
	else
		return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 or 0 as integer
 */
int is_palindrome(char *s)
{
	int len, inc, dec;

	if (*s)
	{
		len = _strlen_recursion(s);
		dec = (len / 2) - 1;
		inc = (len % 2) ? (len / 2) + 1 : len / 2;
		return (s_cmp(s, inc, dec));
	}
	return (1);
}
