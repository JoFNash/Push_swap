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
}

void sort_4_elems(p_storage **storage)
{
	int min;
	p_stack *stack;

	min = min_value_stack((*storage)->a);
	printf("min = %d\n", min);
	stack = (*storage)->a;
	while (stack != NULL)
	{
		if (stack->value == min)
		{
			push_b(storage);
			printf("ahahhah\n");
			break ;
		}
		
		printf("stack->value = %d\n", stack->value);
		stack = stack->next;
		rotate_a(storage);
	}
	sort_3_elems(storage);
	push_a(storage);
}

void sort_5_elems(p_storage **storage)
{

}

void start_big_sort(p_storage **storage)
{

}