#include "push_swap.h"
#include "Libft/libft.h"

void	result_actions(p_storage **storage)
{
    /*
    check_line_on_duplicates((*storage)->line);
    if ((*storage)->line)
        ft_putstr_fd((*storage)->line, 1);
    */
	//show_stack(*storage);
    free_storage(storage);
    exit(0);
}

void	check_line_on_duplicates(char *line)
{

}