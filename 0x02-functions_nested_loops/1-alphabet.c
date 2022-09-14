#include "main.h"
/**
 * print_alphbet - function to print abc
 *
 * Print the alphabet in lowercase followed by a new line
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
