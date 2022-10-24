#include "main.h"

/**
 * print_numbers - prints 0 (ASCII 48) to 9 (ASCII 57)
 * Return: nothing
 */

void print_numbers(void)
{
	int n;
	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
