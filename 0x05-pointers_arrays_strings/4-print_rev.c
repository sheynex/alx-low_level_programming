#include "main.h"

/**
*print_rev - Prints a string in reverse order
*@s: String to reverse
*Return: Nothing
*/

void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	
	for (len = len - 1; s[len] != '\0'; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
