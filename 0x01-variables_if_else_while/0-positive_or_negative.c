#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*main - program to print whether the number stored in the variable n is positive or negative */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0 )
	{
		printf("is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero \n", n);
	}
	else 
	{
		 printf("%d is negative \n", n);
	}

	return (0);
}
