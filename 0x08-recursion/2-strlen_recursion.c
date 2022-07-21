#include "main.h"

/**
 * _strlen_recursion - function
 * @s: pointer
 * Return: returns
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
