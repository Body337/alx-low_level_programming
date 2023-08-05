#include <stdio.h>
#include <stdlib.h>
/**
 * main - gives the least amount of money
 * @argc: number of arguments
 * @argv: string of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int money = atoi(argv[1]);

	if (money <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (money >= 25)
	{
		money = money - 25;
		cents++;
	}
	while (money >= 10)
	{
		money = money - 10;
		cents++;
	}
	while (money >= 5)
	{
		money = money - 5;
		cents++;
	}
	while (money >= 2)
	{
		money = money - 2;
		cents++;
	}
	if (money == 1)
		cents++;
	printf("%d\n", cents);
	return (0);
}
