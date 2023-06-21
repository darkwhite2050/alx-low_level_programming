#include "main.h"
/**
 *main - entry point
 * Description: prints _putchar followed by a new line
 * Return: always 0
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		-putchar(str[ch]);
	_putchar('\n');

	return (0);
}
