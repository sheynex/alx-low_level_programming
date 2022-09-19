#include "main.h"

/**
 * _ato1 - convert string to an integer.
 * @s: Pointer to a character string
 * 
 * Desvription: converting strings to an integer
 *
 * Return: void.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
