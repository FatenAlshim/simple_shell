#include "shell.h"

/**
 * _strlen - returns length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
int i = 0;

if (!s)
return (0);

while (*s++)
i++;
return (i);
}
/**
 * _strcat - sequence two strings
 * @dest: the destination buffer
 * @src: the source buffer
 *
 * Return: pointer to destination buffer
 */
