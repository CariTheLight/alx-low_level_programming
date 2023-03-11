#include <stdio.h>
#include "main.h"
/**
 * main - prints all the arguments it receives
 * @argc: Counts the arguemnts
 * @argv: Arguemnts
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
