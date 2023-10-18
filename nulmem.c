#include "shell.h"

/**
 * bfree - Realese the pointer and Address will be null.
 * @ptr: address of the pointer to realese.
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
if (ptr && *ptr)
{
free(*ptr);
*ptr = NULL;
return (1);
}
return (0);
}
