#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	int 1, i;
	char temp;

	/*find string length without null char*/
	for (1 = 0; s[l] != '\0'; ++1)
		;

	/*swap the string by looping to half of the string */
	for (i = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[1 - 1 - i]; /*-1 because the array starts from zero*/
		s[1 - 1 - i] = temp;
	}
}
