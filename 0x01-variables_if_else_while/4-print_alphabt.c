#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0 upon success, non-zero if failiure
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i != 'e' && i != 'q')
	{
	putchar(i);
	}
	}
	putchar('\n');
	return (0);
}	
