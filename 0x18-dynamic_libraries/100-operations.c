#include <stdlib.h>
/**
 * add - adds two integers
 * @a: integer
 * @b: integer
 * Return: sum of a and b
 **/
int add(int a, int b)
{
	return (a + b);
}

/**
 * mul - multiplies two integers
 * @a: integer
 * @b: integer
 * Return: product of a and b
 **/
int mul(int a, int b)
{
	return (a * b);
}

/**
 * sub - subtracts two integers
 * @a: integer
 * @b: integer
 * Return: difference of a and b
 **/
int sub(int a, int b)
{
	return (a - b);
}

/**
 * divi - divides two integers
 * @a: integer
 * @b: integer
 * Return: result of a divided by b, or -1 on division by zero
 **/
int divi(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}
/**
 * mod - calculates the remainder of division
 * @a: integer
 * @b: integer
 * Return: remainder of a divided by b, or -1 on division by zero
 **/
int mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}
