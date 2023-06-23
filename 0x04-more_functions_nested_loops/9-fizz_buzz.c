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
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("fizzbuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
