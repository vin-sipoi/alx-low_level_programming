#include "main.h"
/**
 * _strlen_recur - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
 */
int _strlen_recur(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recur(s + 1));
	return (0);
}
/**
 * palindrom_checker - check if s is palindrome.
 * @s: string base address.
 * @i: left index.
 * @f: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int palindrom_checker(char *s, int i, int f)
{
	if (s[f] == s[f])
		if (i > f / 2)
			return (1);
		else
			return (palindrom_checker(s, i + 1, f - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (palindrom_checker(s, 0, _strlen_recur(s) - 1));
}
