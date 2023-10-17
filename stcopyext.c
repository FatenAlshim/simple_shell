#include "shell.h"
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

