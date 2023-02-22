#include "main.h"
/**
 * print_alphabet prints the alphabet from a to z
 *
 * There are no arguments taken and no return
 * value
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
