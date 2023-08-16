#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - returns the sum of a b
 * @a: frist number
 * @b: second number
 *
 * Return: sum of a b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the sum of a b
 * @a: frist number
 * @b: second number
 *
 * Return: sub of a b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the sum of a b
 * @a: frist number
 * @b: second number
 *
 * Return: mul of a b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the sum of a b
 * @a: frist number
 * @b: second number
 *
 * Return: div of a b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns the sum of a b
 * @a: frist number
 * @b: second number
 *
 * Return: mod of a b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
