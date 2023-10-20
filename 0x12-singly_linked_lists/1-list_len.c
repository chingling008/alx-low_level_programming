#include "lists.h"

/**
 *Name: Cizario
 *Date: 20/10/2023
 *Programming: Print a lists of things.
*/

size_t list_len(const list_t *h)
	{
size_t elements = 0;

while (h)
{
elements++;
h = h->next;
}
return (elements);
}
