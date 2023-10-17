#include "shell.h"
/**
 * _myhelp - changes the current directory of the process
 * @info: Structure containing potential arguments. Used to maintain
 * constant function prototype.
 * Return: Always 0
 */
int _myhelp(info_t *info)
{
char **arg_array;

arg_array = info->argv;
_puts("help call works. Function not yet implemented \n");
if (0)
_puts(*arg_array); /* temp att_unused workaround */
return (0);
}
/**
 * _myexit - get out of the shell
 * @info: Struct contain estimated aurgements. Used to maintaing
 * const function datatype.
 * Return: exits with a given status.
 * (0) if info.argv[0] != "exit"
 */
int _myexit(info_t *info)
{
int exitcheck;

if (info->argv[1]) /* If there is an exit arguement */
{
exitcheck = _erratoi(info->argv[1]);
if (exitcheck == -1)
		{
info->status = 2;
print_error(info, "Illegal number: ");
_eputs(info->argv[1]);
_eputchar('\n');
return (1);
		}
info->err_num = _erratoi(info->argv[1])
return (-2);
}
info->err_num = -1;
return (-2);
}
