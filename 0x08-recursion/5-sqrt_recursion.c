#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * check - checks for the square root
 * @n:int
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * @i: iterator
 *
 * Return: natural square root or -1
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

