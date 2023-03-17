#include<stdio.h>
/**
 * main - Prints out the sizes of various data types on the computer
 * this program is compiled on.
 * Return: 0 if success.
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	float d;
	char e;

	printf("Size of a char: "+sizeof(e)+" byte(s)");
	printf("Size of a int: "+sizeof(a)+" byte(s)");
	printf("Size of a long int: "+sizeof(b)+" byte(s)");
	printf("Size of a long long int: "+sizeof(c)+" byte(s)");
	printf("Size of a float: "+sizeof(d)+" byte(s)");
	return(0);
}
