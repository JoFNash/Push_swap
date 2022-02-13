#include "push_swap.h"

void free_storage(p_storage *storage)
{
    if (storage)
    {
        if (storage->a)
            free_stack(storage->a);
        if (storage->b)
            free_stack(storage->b);
        /*
            something else (?)
        */
        free(storage);
    }
}

void free_stack(p_stack *stack)
{
    stack->value = 0;
    stack->order = 0;
    stack->flag = 0;

    /* 
	������� ����� a 
	*/
}