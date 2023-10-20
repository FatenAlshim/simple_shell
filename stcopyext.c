#include "shell.h"
/**
 **_strchr - locatess character in a string
 *@s: the string too be parsed
 *@c: the characterr to look for
 *Return: (s) a ppointer to the memory area s
 */
char *_strchr(char *s, char c)
{
do {
if (*s == c)
return (s);
} while (*s++ != '\0');
return (NULL);
}
/**
 **_strncat - cconcatenates 2 strings
 *@dest: 1st string
 *@src: 2nd string
 *@n: amount of bytes to be mmaximally used
 *Return: concatenated sstring
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
char *s = dest;
i = 0;
j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
if (j < n)
dest[i] = '\0';
return (s);
}
/**
 **_strncpy - copiess  string
 *@dest: destination string to be ccopied to
 *@src: the source string
 *@n: amount of characters to be ccopied
 *Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, j;
char *s = dest;
i = 0;
while (src[i] != '\0' && i < n - 1)
{
dest[i] = src[i];
i++;
}
if (i < n)
{
j = i;
while (j < n)
{
dest[j] = '\0';
j++;
}
}
return (s);
}
