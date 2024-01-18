#include "main.h"

#include <string.h>

/**
 *_strcat - concatenates two strings
 *
 *@dest: input parameter string
 *
 *@src: input parameter string
 *
 *Return: dest
 *
 */

char *_strcat(char *dest, char *src)

{

		char *s = dest;



			while (*dest != '\0')

			{

			dest++;									}

			while (*src != '\0')

						{

									*dest = *src;

											dest++;

											src++;

														}

		*dest = '\0';

		return (s);

}
