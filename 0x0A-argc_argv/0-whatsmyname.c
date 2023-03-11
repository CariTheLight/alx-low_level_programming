#include <stdio.h>
#include "main.h"
/**
 * main - Program that prints its name
 * @argc: Counts number of arguments
 * @argv: Arguments
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
