#include <stdio.h>
#include "main.h"

/**
 * _puts - print a string
 * @strt: string to print
 *
 * Descriptio - print a string on success
 * returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);

}
