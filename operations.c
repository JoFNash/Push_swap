#include "push_swap.h"
#include "Libft/libft.h"
#include "push_swap.h"
#include "Libft/libft.h"
#include "stdio.h"

/* allowed operations for stacks a and b */
void swap_a(p_storage **storage)
{
    do_swap_a(storage);
    ft_putstr_fd("sa\n", 1);
}

void swap_b(p_storage **storage)
{
    do_swap_b(storage);
    ft_putstr_fd("sb\n", 1);
}

void swap_a_and_b(p_storage **storage)
{
    do_swap_a(storage);
    do_swap_b(storage);
    ft_putstr_fd("ss\n", 1);
}

void push_a(p_storage **storage)
{
    do_push_a(storage);
    ft_putstr_fd("pa\n", 1);
}

void push_b(p_storage **storage)
{
    do_push_b(storage);
    ft_putstr_fd("pb\n", 1);
}

void rotate_a(p_storage **storage)
{
    do_rotate_a(storage);
    ft_putstr_fd("ra\n", 1);
}

void rotate_b(p_storage **storage)
{
    do_rotate_b(storage);
    ft_putstr_fd("rb\n", 1);
}

void rotate_a_and_b(p_storage **storage)
{
    do_rotate_a(storage);
    do_rotate_b(storage);
    ft_putstr_fd("rr\n", 1);
}

void reverse_rotate_a(p_storage **storage)
{
    do_reverse_rotate_a(storage);
    ft_putstr_fd("rra\n", 1);
}

void reverse_rotate_b(p_storage **storage)
{
    do_reverse_rotate_b(storage);
    ft_putstr_fd("rrb\n", 1);
}

void reverse_rotate_a_and_b(p_storage **storage)
{
	do_reverse_rotate_a(storage);
    do_reverse_rotate_b(storage);
    ft_putstr_fd("rrr\n", 1);
}
