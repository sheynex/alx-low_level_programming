#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * followed by a new line.
 * @s: input string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));

	putchar(10);
}
