#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
** string_nconcat - concatenates n bytes of a string to another string
* @s1: string to append to
* @s2: string to concatenate from
* @n: number of bytes from s2 to concatenate to s1
*
* Return: pointer to the resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
size_t len1 = strlen(s1);
size_t len2 = strlen(s2);
if (n >= len2)
{
n = len2;
}
char *result = (char *)malloc(len1 + n + 1);
if (result == NULL)
{
return (NULL);
}
strcpy(result, s1);
strncpy(result + len1, s2, n);
result[len1 + n] = '\0';
return (result);
}
