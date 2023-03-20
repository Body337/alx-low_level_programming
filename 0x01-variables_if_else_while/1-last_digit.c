#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main block
 * Description: takes a random number and prints the last digit
 * if its grater than 5 or zero or less than 6 and not zero
 * Return: 0
 */
int main(void)
{
	int y , n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	y = n%10;
	if (y > 5)
	{
		printf("is %d and is greater than 5\n", y);
	}
	else if (y == 0)
        {
                printf("is %d and is 0\n", y);
        }
	else if (y < 6 && y != 0)
	{
		printf("is %d and is less than 6 and not 0\n", y);
	}
	return (0);
}
