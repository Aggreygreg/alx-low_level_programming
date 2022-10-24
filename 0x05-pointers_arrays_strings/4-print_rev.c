#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - Function that prints a string,
 * in reverse, followed by a new line.
 *
 * @s: String to be printed.
 */

void print_rev(char *s)
{
	int counter, strLength;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;
	strLength = counter;
	counter = 0;
	while (*(s + counter) != '\0')
		_putchar(*(s + (strLength - (counter++ + 1))));
	_putchar('\n');
}
