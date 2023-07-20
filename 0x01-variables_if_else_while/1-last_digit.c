#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks last digit of randomly generated number.
 * Then produces appropriate output
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int rd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	
       	rd = n % 10;

	if (rd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, rd);
	}
	else if (rd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, rd);
	}
	else if (rd  < 6 && rd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rd);
	}
	
	return (0);
}
