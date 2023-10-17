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
/**
 * populate_env_list - initial env link list
 * @info: Struct contain estimated arguments. Used to maintain
 * constant function prototype.
 * Return: Always 0
 */
int populate_env_list(info_t *info)
{
list_t *node = NULL;
size_t i;

for (i = 0; environ[i]; i++)
add_node_end(&node, environ[i], 0);
info->env = node;
return (0);
}
