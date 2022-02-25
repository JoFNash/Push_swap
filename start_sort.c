#include "push_swap.h"
#include "Libft/libft.h"

void start_sort(p_storage **storage)
{
	int elems;

	elems = (*storage)->argc;
	if (elems <= 5)
	{
		start_little_sort(storage, elems);
	}
	else
	{
		start_big_sort(storage);
	}
}

void start_little_sort(p_storage **storage, int elems)
{
	if (elems == 2)
		sort_2_elems(storage);
	else if (elems == 3)
		sort_3_elems(storage);
	else if (elems == 4)
		sort_4_elems(storage);
	else if (elems == 5)
		sort_5_elems(storage);

	
	show_stack(*storage);
}

void sort_2_elems(p_storage **storage)
{
	swap_a(storage);
	result_actions(storage);
}

void sort_3_elems(p_storage **storage)
{
	p_stack *stack;
	int first;
	int second;
	int third;

	stack = (*storage)->a;
	first = stack->value;
	stack = stack->next;
	second = stack->value;
	stack = stack->next;
	third = stack->value;
	do_sort_3_elems(storage, first, second, third);
}

void do_sort_3_elems(p_storage** storage, int first, int second, int third)
{
	if (first < third && third < second)
	{
		reverse_rotate_a(storage);
		swap_a(storage);
	}
	else if (first < second && first > third)
	{
		reverse_rotate_a(storage);
	}
	else if (first > second && first < third)
	{
		swap_a(storage);
	}
	else if (third < first && third > second)
	{
		rotate_a(storage);
	}
	else if (third < second && first > second)
	{
		swap_a(storage);
		reverse_rotate_a(storage);
	}
	show_stack(*storage);

}

void sort_4_elems(p_storage **storage)
{
	int min;
	p_stack *stack;

	min = min_value_stack((*storage)->a);
	stack = (*storage)->a;
	while (stack != NULL)
	{
		if (stack->value == min)
		{
			push_b(storage);
			break ;
		}
		stack = stack->next;
		rotate_a(storage);
	}
	sort_3_elems(storage);
	push_a(storage);
}

// 9 -7 2 0

void sort_5_elems(p_storage **storage)
{
	int min;
	p_stack *stack;

	min = min_value_stack((*storage)->a);
	stack = (*storage)->a;
	while (stack != NULL)
	{
		if (stack->value == min)
		{
			push_b(storage);
			break ;
		}
		stack = stack->next;
		rotate_a(storage);
	}
	sort_4_elems(storage);
	push_a(storage);
}

void start_big_sort(p_storage **storage)
{
	fill_array(storage);
	if ((*storage)->argc <= 100)
		butterfly_sort(storage, 15);
	else
		butterfly_sort(storage, 30);

}

void butterfly_sort(p_storage **storage, int deviation)
{
	int count;

	count = 0;
	while ((*storage)->a)
	{
		if (count > 1 && (*storage)->a->order <= count)
		{
			push_b(storage);
			rotate_b(storage);
			count++;
		}
		else if ((*storage)->a->order <= (deviation + count))
		{
			push_b(storage);
			count++;
		}
		else if ((*storage)->a->order >= count)
			rotate_a(storage);
		show_stack(*storage);
		sleep(1);
	}
	butterfly_return_sort(storage);
}

void butterfly_return_sort(p_storage **storage)
{
	int max;
	int f;

	while (size_of_stack((*storage)->b) != 0)
	{
		max = max_elem_in_stack((*storage)->b);
		f = elem_upper_middle((*storage)->b, size_of_stack((*storage)->b), max);
		while ((*storage)->b->order != max)
		{
			if (!f)
				rotate_b(storage);
			else
				reverse_rotate_b(storage);
		}
		push_a(storage);
	}
}

