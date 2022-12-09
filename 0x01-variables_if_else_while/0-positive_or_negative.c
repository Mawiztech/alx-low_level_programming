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
	srand(time(0));
	n = rand() - RAND_MAX / 2;


		if (n > 0)
		{
			printf("%i is positive\n", n);
		}
			else if (n < 0)
		{
			printf("%i is negative\n", n);					     }
			else if (n == 0)
			{
			printf("%i is zero\n", n);
			}

return (0);
}

