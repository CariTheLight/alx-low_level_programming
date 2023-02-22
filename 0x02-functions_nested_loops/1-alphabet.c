#include "main.h"
/**
 * print_alphabet prints the alphabet from a to z
 *
 * This function takes no arguments and has no return value
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
