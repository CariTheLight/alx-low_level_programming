#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - Entry.
 *
 * Description: The main function is the entry point to the program and initializes the int output variable with an empty input variable, void.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("n is positive\n");
	if (n == 0)
	printf("n is zero\n");
	if (n < 0)
	printf("n is negative\n");
	return (0);
}
