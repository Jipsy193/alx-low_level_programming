#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*Defination: allocates memory using the malloc
*@b: number of bytes requested for allocation
*@ptr:return value of malloc
*
*Return: success return ptr
*/
void *malloc_checked(unsigned int b) 
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return ptr;
}
