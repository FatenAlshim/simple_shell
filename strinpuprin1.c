#include "shell.h"

/**
 * _erratoi - Change string to integer
 * @s: the string that is changed
 * Return: 0 if no int in string, changed int otherwise
 * -1 on error
 */
int _erratoi(char *s)
{
int i = 0;
unsigned long int result = 0;

if (*s == '+')
s++;  /* TODO: why this make main return 255? */
for (i = 0;  s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
{
result *= 10;
result += (s[i] - '0');
if (result > INT_MAX)
return (-1);
}
else
return (-1);
}
return (result);
}
/**
 * print_error - show an error output
 * @info: the parameter && return information struct
 * @estr: string contain specific error type
 * Return: 0 if no int in string, changed int otherwise
 * -1 on error
 */
void print_error(info_t *info, char *estr)
{
_eputs(info->fname);
_eputs(": ");
print_d(info->line_count, STDERR_FILENO);
_eputs(": ");
_eputs(info->argv[0]);
_eputs(": ");
_eputs(estr);
}
/**
 * remove_comments - Method changes first instance of '#' with '\0'
 * @buf: address of the string to edited
 *
 * Return: Always 0;
 */
void remove_comments(char *buf)
{
int i;

for (i = 0; buf[i] != '\0'; i++)
if (buf[i] == '#' && (!i || buf[i - 1] == ' '))
{
buf[i] = '\0';
break;
}
}
/**
 * print_d - function prints a decimal (integer) number (base 10)
 * @input: the input
 * @fd: the filedescriptor to write to
 *
 * Return: number of characters printed
 */
int print_d(int input, int fd)
{
int (*__putchar)(char) = _putchar;
int i, count = 0;
unsigned int _abs_, current;

if (fd == STDERR_FILENO)
__putchar = _eputchar;
if (input < 0)
{
_abs_ = -input;
__putchar('-');
count++;
}
else
_abs_ = input;
current = _abs_;
for (i = 1000000000; i > 1; i /= 10)
{
if (_abs_ / i)
{
__putchar('0' + current / i);
count++;
}
current %= i;
}
__putchar('0' + current);
count++;

return (count);
}
/**
 * convert_number - change method, a copy of simple_ataio
 * @num: number.
 * @base: base.
 * @flags: argument flags
 *
 * Return: string
 */
