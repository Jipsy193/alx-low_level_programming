#include <stdio.h>
#include "main.h"
/**
* _putchar - writes the character c to std out
* @c: prints character
* Return: 1.
* 
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
