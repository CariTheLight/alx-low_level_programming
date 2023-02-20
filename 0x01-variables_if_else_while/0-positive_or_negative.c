#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This function complies a program which assigns
 * a random number to a variable n each time
 * it is excuted.
 *
 * Return: 0 on success, non-zero on failure
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is ", n);
	if (n > 0)
	{
	printf("positive\n");
	}
	else if (n == 0)
	{
	printf("zero\n");
	}
	else if (n < 0)
	{
	printf("negative\n");
	}
	return (0);
}
