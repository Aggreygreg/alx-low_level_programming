#include <stdio.h>

/**
 * main -Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
			continue;
		else
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
