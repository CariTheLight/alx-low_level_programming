#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function thats prints a name passed to it
 * @name: char to display to the stdout
 * @f: A pointer function
 * Return: Nothing (void return type)
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is NULL */
		return;

	f(name);
}
