#include "push_swap.h"
#include <stdio.h>

void free_storage(p_storage **storage)
{
    if (storage && *storage)
    {
        if ((*storage)->a)
           free_stack(&((*storage)->a));
        if ((*storage)->b)
            free_stack(&((*storage)->b));
        if ((*storage)->line)
            free((*storage)->line);
        free(*storage);
    }
}

void free_stack(p_stack **stack)
{
    p_stack *tmp;
    p_stack *next;

    tmp = (*stack);
    next = NULL;
	if (tmp)
	{
		while (tmp != NULL)
		{
			next = tmp->next;
			free(tmp);
			tmp = next;
		}
		(*stack) = NULL;
	}
}
