#include"main.h"

/** main -entry point
 * prints the alphabet, in lowercase,
 *	 followed by a new line
 *
*/

void print_alphapet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
