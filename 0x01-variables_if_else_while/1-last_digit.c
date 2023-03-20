#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or zero
 *
 * Return: Always 0
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	return (0);
}
