#include "push_swap.h"
#include "Libft/libft.h"
#include "push_swap.h"
#include "Libft/libft.h"
#include "stdio.h"

/* allowed operations for stacks a and b */
void	swap_a(p_storage **storage)
{
	do_swap_a(storage);
	ft_putstr_fd("sa\n", 1);
}

void	swap_b(p_storage **storage)
{
	do_swap_b(storage);
	ft_putstr_fd("sb\n", 1);
}

void	swap_a_and_b(p_storage **storage)
{
	do_swap_a(storage);
	do_swap_b(storage);
	ft_putstr_fd("ss\n", 1);
}
