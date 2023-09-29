#include <stdio.h>
#include "main.h"
int is_prime_helper(int n, int divisor)
/**
* is_prime_helper - says if an integer is a prime number or not
* @n: number to evaluate
*
* Return: 1 if n is a prime number, 0 if not
*/
{
if (divisor <= 1)
return 1;
if (n % divisor == 0)
return 0;
return (is_prime_helper(n, divisor - 1));
}
int is_prime_number(int n)
/**
* Is_prime_number- calculates if a number is prime recursively
* @n: number to evaluate
* @divisor: iterator
*
* Return: 1 if n is prime, 0 if not
*/
{
if (n <= 1) return 0;
return (is_prime_helper(n, n - 1));
}

