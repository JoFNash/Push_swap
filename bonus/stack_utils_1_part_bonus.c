/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_1_part_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:01:08 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/10 17:44:38 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

t_stack	*init_stack(int value)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(struct s_stack *));
	if (!stack)
		return (NULL);
	stack->value = value;
	stack->prev = NULL;
	stack->next = NULL;
	stack->order = 0;
	return (stack);
}

void	add_stack_top(t_storage **storage, t_stack **top, int value, int order)
{
	t_stack		*tmp;
	t_stack		*new_top;

	if (*top == NULL)
		create_stack(storage, top, value, order);
	else
	{
		new_top = (t_stack *)malloc(sizeof(t_stack));
		if (!new_top)
			error_actions(storage);
		tmp = *top;
		*top = new_top;
		new_top->next = tmp;
		tmp->prev = *top;
		new_top->value = value;
		new_top->order = order;
	}
}

void	add_stack_end(t_storage **storage, t_stack **top,
		int value, int order)
{
	t_stack		*tmp;
	t_stack		*new_tail;

	if (*top == NULL)
		create_stack(storage, top, value, order);
	else
	{
		new_tail = (t_stack *)malloc(sizeof(t_stack));
		if (!new_tail)
			error_actions(storage);
		new_tail->value = value;
		new_tail->order = order;
		tmp = *top;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_tail;
		new_tail->prev = tmp;
		new_tail->next = NULL;
	}
}

void	create_stack(t_storage **storage, t_stack **top, int value, int order)
{
	*top = (t_stack *)malloc(sizeof(t_stack));
	if (!(*top))
		error_actions(storage);
	(*top)->next = NULL;
	(*top)->prev = NULL;
	(*top)->value = value;
	(*top)->order = order;
}

/*
void	show_stack(t_storage *storage)
{
	t_stack	*stack;

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
		printf("stack[%d] = %d\n", stack->order, stack->value);
		stack = stack->next;
	}
	printf("---------------\n");
}
*/