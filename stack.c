#include "push_swap.h"
#include "Libft/libft.h"

struct s_stack* Init_stack(int value)
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

void    Add_stack_top(p_storage **storage, p_stack **top, int value)
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

void    Add_stack_end(p_storage **storage, p_stack **top, int value)
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

void Show_stack(p_storage * storage)
{
    p_stack *stack;

    stack = storage->a;
    while (stack != NULL)
    {
        ft_putnbr_fd(stack->value, 1);
        ft_putchar_fd('\n', 1);
        stack = stack->next;
    }
}

void Remove()
{

}


