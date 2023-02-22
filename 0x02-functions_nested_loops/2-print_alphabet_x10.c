#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet from a to z ten times
 *
 * This function takes no arguments and has no return value
 */
void print_alphabet_x10(void)
{
	char c;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
