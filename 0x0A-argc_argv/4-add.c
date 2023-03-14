#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Add positive numbers
 * @argc: Counts the number arguments
 * @argv: Arguments
 * Result: Always 0 (success)
 */
int main(int argc, char **argv)
{
		int i, j, sum = 0;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);

		return (0);
}
