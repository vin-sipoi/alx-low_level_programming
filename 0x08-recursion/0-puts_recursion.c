#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @su: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *su)
{
	if (*su)
	{
		_putchar(*su);
		_puts_recursion(su + 1);
	}

	else
		_putchar('\n');
}

