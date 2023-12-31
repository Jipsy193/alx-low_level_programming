#include "variadic_functions.h"
#include <stdio.h>
/**
* sum_them_all - Returns the sum of all its parameters.
* @n: The number of paramters passed to the function
* @...: A variable number of paramters to calculate the sum of.
*
* Return: If n == 0, return 0 else return sum
*/
int sum_them_all(const unsigned int n, ...)
{
va_list num;
unsigned int i, sum = 0;
va_start(num, n);
for (i = 0; i < n; i++)
sum += va_arg(num, int);
va_end(num);
return (sum);
}
