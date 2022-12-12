#include <stdio.h>
/**
 *main - prints both lower and upper case number
 *
 *Return: 0
 */
int main(void)
{
	char ch;
	char CH;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A' ; CH <= 'Z' ; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}
