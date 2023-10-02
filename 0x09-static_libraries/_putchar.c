#include "main.h"
#include <unistd.h>
/**
*putchar - writes tge charater c to stdout
*
* Return on success 1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
