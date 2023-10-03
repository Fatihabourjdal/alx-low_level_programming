#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	int start = n / 2;
	 if (n <= 1)
		 return(0);
	 return (is_prime(n, start));
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
