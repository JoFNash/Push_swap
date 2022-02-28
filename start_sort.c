#include "push_swap.h"
#include "Libft/libft.h"

void	start_sort(p_storage **storage)
{
	int	elems;

	elems = (*storage)->argc;
	if (elems <= 5)
	{
		start_little_sort(storage, elems);
	}
	else
	{
		start_big_sort(storage);
	}
	result_actions(storage);
}
