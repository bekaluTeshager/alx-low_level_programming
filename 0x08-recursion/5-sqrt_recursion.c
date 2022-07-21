#include "main.h"

/**
 * helperFunction - function
 * @num: num
 * @pSqrt: possible sqrt
 * Return: returns
 */
int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		{
			return (helperFunction(num, pSqrt + 1));
		}
	}
}

/**
 * _sqrt_recursion - function
 * @n: num
 * Return: returns
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}

