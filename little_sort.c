#include "push_swap.h"
#include "Libft/libft.h"

void	start_little_sort(p_storage **storage, int elems)
{
	if (elems == 2)
		sort_2_elems(storage);
	else if (elems == 3)
		sort_3_elems(storage);
	else if (elems == 4)
		sort_4_elems(storage);
	else if (elems == 5)
		sort_5_elems(storage);
}
