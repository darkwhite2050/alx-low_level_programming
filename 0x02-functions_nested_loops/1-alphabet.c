#include"main.h"

/**
 * main -entry point
 * prin alphabet, utilitez on _putchar function to print
 * alphabet a - z
 *
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
