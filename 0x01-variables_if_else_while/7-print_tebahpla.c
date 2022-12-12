#include<stdio.h>
/**
 * main - This is the main funtion read alphabet in reverse
 *
 * Description: this prints in reverse order
 *
 * Return: return o
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
