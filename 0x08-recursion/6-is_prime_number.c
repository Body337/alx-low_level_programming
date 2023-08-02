#include "main.h"
int prime(int n, int i);
/**
 * is_prime_number - tells wether the number is prime or not
 * @n: number to be tested
 *
 * Return: 0 if not prime 1 if prime
 */
int is_prime_number(int n)
{
	return prime(n, 2);
}
/**
 * prime - detrmine wether number is prime or not
 * @i: starting number
 *
 * Return: 0 if not prime 1 if prime
 */
int prime(int n, int i)
{
	if (n <= 2)
	{
		return (n == 2) ? 1 : 0;
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (prime(n, i + 1));
}
