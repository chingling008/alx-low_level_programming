#include "lists.h"

/**
 *Name: Cizario Gum
 *Date: 20/10/2023
 *Programming: Free the lists.
 */

void free_list(list_t *head)
{
list_t *tmp;

while (head)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
