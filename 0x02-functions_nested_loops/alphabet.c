#include<stdio.h>
/**
 *print_alphabet-This habours the print fun    ction.
 *description: store the function
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
	putchar(alp);
	}
	putchar('\n');
}
/**
 *main-Start point is here
 *description:To write alphabets
 *Return:0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

