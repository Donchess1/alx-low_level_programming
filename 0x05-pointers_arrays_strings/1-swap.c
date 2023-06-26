#include"main.h"
#include<stdio.h>
/**
 *swap_int- interchanges figures
 *description- used to swap integers
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
