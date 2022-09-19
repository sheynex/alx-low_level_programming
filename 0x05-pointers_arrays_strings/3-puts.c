#include "main.h"

/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * On success: returns no error
 */

void _puts(char *str)
{
	int var2;

	for (var2 = 0; str[index] != '\0'; var2++)
	{
		_putchar(str[var2]);
	}
	_putchar('\n');
}
