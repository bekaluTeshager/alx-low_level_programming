#include <stdio.h>
#include <ctype.h>

/**
 *  * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int x;

	for (x = 97; x <= 122; x++)
	{
		x = tolower(x);
		putchar(x);
	}

	return (0);
}
