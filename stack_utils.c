#include "push_swap.h"
#include "Libft/libft.h"
#include <stdio.h>

p_stack* init_stack(int value)
{
    struct s_stack *Stack;

    Stack = (struct s_stack*)malloc(sizeof(struct s_stack *));
    if (!Stack)
        return (NULL);
    Stack->value = value;
    Stack->prev = NULL;
    Stack->next = NULL;
    Stack->order = 0;
    Stack->flag = 0;
    return (Stack);
}

void    add_stack_top(p_storage **storage, p_stack **top, int value)
{
    p_stack      *tmp;
    p_stack      *new_top;

    if (*top == NULL) /* if stack is free */
    {
        *top = (p_stack*)malloc(sizeof(p_stack));
        if (!(*top))
            error_actions(storage);
        (*top)->next = NULL;
        (*top)->prev = NULL;
        (*top)->value = value;
    }
    else /* if stack is NOT free */
    {
        new_top = (p_stack*)malloc(sizeof(p_stack));
        if (!new_top)
            error_actions(storage);
        tmp = *top;
        *top = new_top;
        new_top->next = tmp;
        tmp->prev = *top;
        new_top->value = value;
    }
}

void   add_stack_end(p_storage **storage, p_stack **top, int value)
{
    p_stack      *tmp;
    p_stack      *new_tail;

    if (*top == NULL) /* if stack is free */
    {
        *top = (p_stack*)malloc(sizeof(p_stack));
        if (!(*top))
            error_actions(storage);
        (*top)->next = NULL;
        (*top)->prev = NULL;
        (*top)->value = value;
    }
    else /* if stack is NOT free */
    {
        new_tail = (p_stack *)malloc(sizeof(p_stack));
        if (!new_tail)
            error_actions(storage);
        new_tail->value = value;
        tmp = *top;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = new_tail;
        new_tail->prev = tmp;
        new_tail->next = NULL;
    }
}

void show_stack(p_storage * storage)
{
    p_stack *stack;

    printf("---------------\n");
    write(1, "Stack a: \n", 11);
    stack = storage->a;
    while (stack != NULL)
    {
        printf("stack[%d] = %d\n", stack->order, stack->value);
        stack = stack->next;
    }

    write(1, "\nStack b: \n", 12);
    stack = storage->b;
    while (stack != NULL)
    {
        ft_putnbr_fd(stack->value, 1);
        ft_putchar_fd('\n', 1);
        stack = stack->next;
    }
    printf("---------------\n");

}

void remove_top_stack(p_storage **storage, p_stack **top, int *remove_value)
{
    p_stack *tmp;

    tmp = (*top);
	if (tmp->next == NULL)
	{
		*remove_value = tmp->value;
		(*top)->next = NULL;
		(*top)->prev = NULL;
		free(tmp);
	}
    if (tmp->next != NULL)
    {
        *remove_value = tmp->value;
        (*top) = (*top)->next;
        (*top)->prev = NULL;
        free(tmp);
    }
}

void remove_end_stack(p_storage **storage, p_stack **top, int *remove_value)
{
    p_stack *tmp;

    tmp = *top;
    if (tmp != NULL)
    {
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        *remove_value = tmp->value;
        tmp = tmp->prev;
        free(tmp->next);
        tmp->next = NULL;
    }
}
