#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - This function complies a program which assigns
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
	printf("%d is", n);
	if (n > 0)
	{
	printf("is positive\n");
	}
	else if (n == 0)
	{
	printf("is zero\n");
	}
	else if (n < 0)
	{
	printf("is negative\n");
	}
	return (0);
}
