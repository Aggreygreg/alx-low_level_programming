#include "holberton.h"
#include <stdio.h>

/**
 * _puts - Function that prints a string, followed by a new line.
 *
 * @str: String to be printed.
 */
void _puts(char *str)
{
	while (*str)

	_putchar(*str++);
	_putchar('\n');
}
