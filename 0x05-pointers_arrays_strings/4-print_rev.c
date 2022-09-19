#include "main.h"

/**
*print_rev - Prints a string in reverse order
*@s: String to reverse
*Return: Nothing
*/

void print_rev(char *s)
{
	int lenString = strlenString(s);

	while (lenString--)
		putchar(*(s + lenString));

	putchar(10);
}
