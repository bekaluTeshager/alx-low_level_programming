#include "main.h"

/**
 * print_alphabet_x10 - prints
 *
 */
void print_alphabet_x10(void)
{
	int j, k;

	for (k = 0; k < 10; k++)
	{

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
