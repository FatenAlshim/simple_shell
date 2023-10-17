#include "shell.h"

/**
 * _myenv - show the curret enviro
 * @info: Struct contain estimated arguments. Used to maintain
 * const function prototype.
 * Return: Always 0
 */
int _myenv(info_t *info)
{
print_list_str(info->env);
return (0);
}
