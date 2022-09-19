#include "main.h"

/**
* rev_string - reverse the string.
* @s: pointer to string
*
* Return: void.
*/

void rev_string(char *s)
{
	int L, m, n, temp;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	m = 0;
	n = 1 - 1;

	while (m < n)
	{
		temp = s[n];
		s[n] = s[m];
		s[m] = temp;
		n++;
		m--;
	}
}
