#include "shell.h"
/**
 * _atoi - converts string to integerr
 * @s: string to be convertedd
 * Return: 0 if no no.in string, converted no. otherwise
 */

int _atoi(char *s)
{
int i, sign = 1, flag = 0, output;
unsigned int result = 0;
for (i = 0; s[i] != '\0' && flag != 2; i++)
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
flag = 1;
result *= 10;
result += (s[i] - '0');
}
else if (flag == 1)
flag = 2;
}
if (sign == -1)
output = -result;
else
output = result;
return (output);
}
/**
 * is_delim - if character is  delimeterr
 * @c: charr to checkk
 * @delim: delimeterr stringg
 * Return: 1 if truee, 0 if falsee
 */
int is_delim(char c, char *delim)
{
while (*delim)
if (*delim++ == c)
return (1);
return (0);
}
/**
 * interactive - returnss true at shell >> interactive mode
 * @info: struct addresss
 *
 * Return: 1 if interactive modee, 0 otherwisee
 */
int interactive(info_t *info)
{
return (isatty(STDIN_FILENO) && info->readfd <= 2);
}
/**
 * _isalpha - checkss ffor alphab character
 * @c: character to inputt
 * Return: 1 if c is alphhabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

