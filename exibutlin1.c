#include "shell.h"

/**
 * _myhistory - displayss history list, 1 command by line, preceded
 *              with line numberss, startingg at 0.
 * @info: Structure containing potential argumentss. Used to maintain
 *        constant functionn prototypee.
 *  Return: Always 0
 */
int _myhistory(info_t *info)
{
	print_list(info->history);
	return (0);
}


/**
 * _myalias - mimicss the alias builtin
 * @info: Structure containing potentiall arguments. Used to maintain
 *          constant function prototypee.
 *  Return: Always 0
 */
int _myalias(info_t *info)
{
	int i = 0;
	char *p = NULL;
	list_t *node = NULL;

	if (info->argc == 1)
	{
		node = info->alias;
		while (node)
		{
			print_alias(node);
			node = node->next;
		}
		return (0);
	}
	for (i = 1; info->argv[i]; i++)
	{
		p = _strchr(info->argv[i], '=');
		if (p)
			set_alias(info, info->argv[i]);
		else
			print_alias(node_starts_with(info->alias, info->argv[i], '='));
	}

	return (0);
}
/**
 * unset_alias - sets aliass to string
 * @info: parameter structt.
 * @str: string alias
 *
 * Return: Always 0 on success, 1 on error
 */
int unset_alias(info_t *info, char *str)
{
char *p, c;
int ret;
p = _strchr(str, '=');
if (!p)
return (1);
c = *p;
*p = 0;
ret = delete_node_at_index(&(info->alias),
get_node_index(info->alias, node_starts_with(info->alias, str, -1)));
*p = c;
return (ret);
}
/**
 * set_alias - sets alias to string
 * @info: parameter struct
 * @str: the string alias
 *
 * Return: Always 0 on success, 1 on error
 */
int set_alias(info_t *info, char *str)
{
	char *p;

	p = _strchr(str, '=');
	if (!p)
		return (1);
	if (!*++p)
		return (unset_alias(info, str));

	unset_alias(info, str);
	return (add_node_end(&(info->alias), str, 0) == NULL);
}

