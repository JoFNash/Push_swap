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

void    Add_stack(p_storage **storage, p_stack **top, int value)
{
    p_stack      *tmp;
    p_stack      *new_top;

    if (*top == NULL) /* если стек пустой */
    {
        *top = (p_stack*)malloc(sizeof(p_stack));
        if (!(*top))
            error_actions(storage);
        (*top)->next = NULL;
        (*top)->prev = NULL;
        (*top)->value = value;
    }
    else /* если не пустой */
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

void Show_stack(p_storage * storage) /* здесь передали копию! одна звезда! */
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


