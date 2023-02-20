#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0 upon success, non-zero if failure
 */
int main(void)
{
        int i;

        for (i = 'a'; i <= 'z'; i++)
	{
        putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
	putchar(i);
	}
	putchar('\n');
        return (0);
}
