#include "main.h"

/**
 * print_triangle - entry point
 * Description: i Prints diagonals
 * @siza: siza of the triangle
 * Return: void
 */

void print_triangle(int siza)
{
	int row, hashes, spaces;

	if (siza <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
