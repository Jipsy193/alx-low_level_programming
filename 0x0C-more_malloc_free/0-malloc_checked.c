#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
** malloc_checked - allocates memory using malloc
* @b: number of bytes requested for allocation
* malloc_checked: checks if malloc returns to ptr
* Return: success return ptr
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
