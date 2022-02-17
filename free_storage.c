#include "push_swap.h"

void free_storage(p_storage **storage)
{
    if (storage && *storage)
    {
        if ((*storage)->a)
            free_stack(&((*storage)->a));
        if ((*storage)->b)
            free_stack(&((*storage)->b));
        free(*storage);
    }
}

void free_stack(p_stack **stack)
{
    p_stack *tmp;
    p_stack *next;

    tmp = (*stack);
    next = NULL;
    while (tmp != NULL)
    {
        next = tmp->next;
        free(tmp);
        tmp = tmp->next;
    }
    free(*stack);
    (*stack) = NULL;
}
