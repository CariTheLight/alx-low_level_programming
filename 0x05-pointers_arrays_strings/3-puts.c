#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 32; i++)
	{
		_putchar((i / 16) + '0');
		_putchar((i % 16) + '0');
	}
	_putchar('\n');
	return (0);
}
