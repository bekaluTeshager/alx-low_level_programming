#include "main.h"
#include <string.h>

/**
 * _strcat -> function
 * @dest: parameter
 * @src: parameter
 * Return: a str
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += l;
	}
	dest[len] = '\n';
	retun(dest);
}
