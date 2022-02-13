#include <stdlib.h>
#include <unistd.h>
#include "../Libft/libft.h"
#include "push_swap.h"

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

struct s_stack *stack_add(struct s_storage *storage, int value, char stack_name)
{
    struct s_stack     **top;
    struct s_stack      *tmp;

    if (stack_name == 'a')
        top = &storage->a;
    else
        top = &storage->b;
    if (*top == NULL)
    {
        *top = (struct s_stack*)malloc(sizeof(struct s_stack));
        if (!(*top))
            error_actions(storage);
        (*top)->next = *top;
        (*top)->prev = *top;
        (*top)->value = value;   
    }
    else
    {
        tmp = (struct s_stack*)malloc(sizeof(struct s_stack));
        if (!tmp)
            error_actions(storage);
        tmp->next = (*top);
        tmp->prev = (*top)->prev;
        (*top)->prev = tmp;
        tmp->prev->next = tmp;                          // ?
        tmp->value = value;
    }
}

void Remove()
{

}


