#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main: This will print out the last digit of a random number
 * number will be stored in variable (n)
 * return : Always 0

*/
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, x);
	}
	else if (x < 6 && x != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, x);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			n, x);
	}

	return (0);

}

