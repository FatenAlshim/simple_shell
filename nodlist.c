#include "shell.h"

/**
 * add_node - node added to start of the list
 * @head: address of pointer to node head
 * @str: node str field
 * @num: node index
 *
 * Return: length of list
 */
list_t *add_node(list_t **head, const char *str, int num)
{
list_t *new_head;

if (!head)
return (NULL);
new_head = malloc(sizeof(list_t));
if (!new_head)
return (NULL);
_memset((void *)new_head, 0, sizeof(list_t));
new_head->num = num;
if (str)
{
new_head->str = _strdup(str);
if (!new_head->str)
{
free(new_head);
return (NULL);
}
}
new_head->next = *head;
*head = new_head;
return (new_head);
}
/**
 * free_list - Realese all nodes of the list
 * @head_ptr: address of pointer to node head
 *
 * Return: void
 */
