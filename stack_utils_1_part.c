/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_1_part.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:01:08 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/04 15:35:43 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"
#include <stdio.h>

t_stack	*init_stack(int value)
{
	struct s_stack	*Stack;

	Stack = (t_stack *)malloc(sizeof(struct s_stack *));
	if (!Stack)
		return (NULL);
	Stack->value = value;
	Stack->prev = NULL;
	Stack->next = NULL;
	Stack->order = 0;
	return (Stack);
}

void	add_stack_top(t_storage **storage, t_stack **top, int value, int order)
{
	t_stack		*tmp;
	t_stack		*new_top;

	if (*top == NULL) /* if stack is free */
	{
		*top = (t_stack *)malloc(sizeof(t_stack));
		if (!(*top))
			error_actions(storage);
		(*top)->next = NULL;
		(*top)->prev = NULL;
		(*top)->value = value;
		(*top)->order = order;
	}
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
	{
		*top = (t_stack *)malloc(sizeof(t_stack));
		if (!(*top))
			error_actions(storage);
		(*top)->next = NULL;
		(*top)->prev = NULL;
		(*top)->value = value;
		(*top)->order = order;
	}
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
