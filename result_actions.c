#include "push_swap.h"
#include "Libft/libft.h"

void result_actions(p_storage **storage)
{
    /*
    check_line_on_duplicates((*storage)->line);
    if ((*storage)->line)
        ft_putstr_fd((*storage)->line, 1);
    */
    ft_putstr_fd("\n", 1);
    free_storage(storage);
    exit(1);
}

void check_line_on_duplicates(char *line)
{

}