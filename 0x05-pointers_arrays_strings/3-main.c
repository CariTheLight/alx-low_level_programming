#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	char *str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

    return (0);
}
