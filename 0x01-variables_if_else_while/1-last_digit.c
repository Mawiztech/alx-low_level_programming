#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints a random number if positive or negative
 *
 * Return: ends the program
 */
int main(void)
{
	        int n;
		int l;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		l = n % 10;
		if (l > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, l);
		}
		else if (l == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, l);
		}
		else
		{

			printf("Last digit of %d is %d and isless then 6\n", n, l);
		}
return (0);
}

