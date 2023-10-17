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
/**
 * _getenv - gets the value of an environ variable
 * @info: Structure containing potential arguments. Used to maintain
 * @name: env var name
 *
 * Return: the value
 */
char *_getenv(info_t *info, const char *name)
{
list_t *node = info->env;
char *p;

while (node)
{
p = starts_with(node->str, name);
if (p && *p)
return (p);
node = node->next;
}
return (NULL);
}
/**
 * _mysetenv - Initialize a new enviro datatype,
 * or update an existing one
 * @info: Struct contain estimated arguments. Used to maintain
 * constant function prototype.
 *  Return: Always 0
 */
int _mysetenv(info_t *info)
{
if (info->argc != 3)
{
_eputs("Incorrect number of arguements\n");
return (1);
}
if (_setenv(info, info->argv[1], info->argv[2]))
return (0);
return (1);
}
/**
 * _myunsetenv - Delete an enviro datatype.
 * @info: Struct contain estimated arguments. Used to maintain
 *        const function prototype.
 * Return: Always 0
 */
