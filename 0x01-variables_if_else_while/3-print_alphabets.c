#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{

	int ch, ch_l, ch_u;

	for (ch = 97; ch <= 122; ch++)
	{
		ch_l = tolower(ch);
		putchar(ch_l);
	}
	for (ch = 97; ch <= 122; ch++)
	{
		ch_u = toupper(ch);
		putchar(ch_u);
	}
	putchar(10);

	return (0);
}
