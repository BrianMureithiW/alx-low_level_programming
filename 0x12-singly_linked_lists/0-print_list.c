#include "list.h"
#include <stdio.h>
#include <stdlib.h>

size_t print_list(const list_t *h)
{
	size_t nodeNum = 0;

	while (h)
	{
		if(h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		nodeNum++;
		h = h->next;
	}
	return (nodeNum);
}
