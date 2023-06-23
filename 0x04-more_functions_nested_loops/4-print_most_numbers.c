#include "main.h"

/**
 * print_most_numbers - print 0 - 9 apart
 * from 2 and 4 and you can
 * only use _putchar twice
 *
 * print the numbers, from 0 to 9, followed by a new line.
 * Return: always 0
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
