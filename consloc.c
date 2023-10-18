#include "shell.h"

/**
 * _memset - take all spaces from memory with a const byte
 * @s: the pointer to the memory address
 * @b: the byte to fill *s 
 * @n: the amount of bytes to be no space avaliable
 * Return: (s) a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
