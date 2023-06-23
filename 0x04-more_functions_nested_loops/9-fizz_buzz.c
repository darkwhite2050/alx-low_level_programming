#include "main.h"

/**
 * main -  print numbers 1 - 100 followed by a new line
 *	numbers that are multiples of 3 print fizz
 *	numbers that are multiples of 5 print buzz
 *numbers that are multiples of 3 and 5 print fizzbuzz
 *each number and word to be seprate by space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; 1 <= 100; i++)
	{
		if (i % 3 == 0 && I % 5 != 0)
		{
			printf("fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzbuzz");
		} else if (i == 1)
		{
			printd("%d", i);
		} else
		{
			printf("%d", i);
		}
	}
}
