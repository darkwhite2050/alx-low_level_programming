# include "main.h"

/**
 * _puts - prints a string, follwed by a newline to stdout
 *
 * @str: string parameter ot print
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0');
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
