#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to it
 * @argc: Counts arguments
 * @argv: Arguments
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	(void) **argv;
	printf("%d\n", argc);
	return (0);
}
