#include "push_swap.h"
#include "Libft/libft.h"
#include "push_swap.h"
#include "Libft/libft.h"
#include "stdio.h"

void	reverse_rotate_a(p_storage **storage)
{
	if (do_reverse_rotate_a(storage))
		ft_putstr_fd("rra\n", 1);
}

void	reverse_rotate_b(p_storage **storage)
{
	if (do_reverse_rotate_b(storage))
		ft_putstr_fd("rrb\n", 1);
}

void	reverse_rotate_a_and_b(p_storage **storage)
{
	if (do_reverse_rotate_a(storage) && do_reverse_rotate_b(storage))
		ft_putstr_fd("rrr\n", 1);
}
