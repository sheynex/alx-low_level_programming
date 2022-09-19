#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - generates random valid passwords
*Return: 0 (on sucess)
*
*/

int main(void)
{
	int pass, sum;
	
	srand(time(NULL));
	sum = 0;
	while (sum <= 2655
	{
		pass = (rand() % 125);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2775 - sum);
	
	return (0);
}
