#include <stdio.h>
/**
 * main - prints the size of various variables
 *
 * Return: return 0 is exited properly
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("size of int: %d byte(s)\n", sizeof(int));
	printf("size of long int %d byte(s)\n", sizeof(long int));
	printf("size of long long int %d byte(s)\n", sizeof(long long int));
	printf("size of float %d byte(s)\n", sizeof(float));
	return (0);
}
