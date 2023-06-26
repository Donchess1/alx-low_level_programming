#include"main.h"
#include<stdio.h>
/**
 * main-This swaps integers
 *@a: integer a
 *@b: integer b
 *Return 0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
