#include "push_swap.h"

/* allowed operations for stacks a and b */
void swap_a(p_storage **storage)
{
    int tmp_value;
    int first_value;
    int second_value;
    p_stack *stack_a;

    stack_a = &((*storage)->a);
    first_value = stack_a->value;

    stack_a = stack_a->next;
    second_value = stack_a->value;

    tmp_value = first_value;
    first_value = second_value;
    second_value = tmp_value;
}

void swap_b(p_storage **storage)
{
    
}

void swap_a_and_b(p_storage **storage)
{
    
}

void push_a(p_storage **storage)
{
    
}

void push_b(p_storage **storage)
{
    
}

void rotate_a(p_storage **storage)
{
    
}

void rotate_b(p_storage **storage)
{
    
}

void rotate_a_and_b(p_storage **storage)
{
    
}

void reverse_rotate_a(p_storage **storage)
{
    
}

void reverse_rotate_b(p_storage **storage)
{
    
}

void reverse_rotate_a_and_b(p_storage **storage)
{
	
}