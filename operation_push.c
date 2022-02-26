#include "push_swap.h"
#include "Libft/libft.h"
#include "push_swap.h"
#include "Libft/libft.h"
#include "stdio.h"

void	push_a(p_storage **storage)
{
	if (do_push_a(storage))
		ft_putstr_fd("pa\n", 1);
}

void	push_b(p_storage **storage)
{
	if (do_push_b(storage))
		ft_putstr_fd("pb\n", 1);
}
