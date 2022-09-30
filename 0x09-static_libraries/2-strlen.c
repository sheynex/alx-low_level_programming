#include "main.h"

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns length as integer;
 */

int _strlen(char *s)
{
	int lenString = 0;

	while (*(s + lenString) != '\0')
		lenString++;

	return (lenString);
}
