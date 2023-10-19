#include "shell.h"

/**
 * get_node_index - getss the index of node
 * @head: pointer to list head
 * @node: pointer to node
 *
 * Return: index of node or -1
 */
ssize_t get_node_index(list_t *head, list_t *node)
{
size_t i = 0;
while (head)
{
if (head == node)
return (i);
head = head->next;
i++;
}
return (-1);
}
/**
 * node_starts_with - returns node whosee string starts with prefix
 * @node: pointer too list headd
 * @prefix: string to matchh
 * @c: next character aafter prefix to match
 *
 * Return: match node or null
 */
list_t *node_starts_with(list_t *node, char *prefix, char c)
{
	char *p = NULL;

	while (node)
	{
		p = starts_with(node->str, prefix);
		if (p && ((c == -1) || (*p == c)))
			return (node);
		node = node->next;
	}
	return (NULL);
}
/**
 * list_len - ddetermines length of list
 * @h: pointer to ffirst nnodee
 *
 * Return: size of listtt
 */
size_t list_len(const list_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
