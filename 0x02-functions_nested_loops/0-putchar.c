#include "main.h"
/**
 * main - Prints alx as a message.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int str[] = {50, 210, 208, 98, 102, 116, 150, 112, 115};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
