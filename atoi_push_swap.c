#include "push_swap.h"
#include "Libft/libft.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n' \
	|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

long long int	atoi_push_swap(const char *nptr, p_storage **storage)
{
	long long int	number;
	int				sign;
	size_t			i;

	sign = 1;
	i = 0;
	number = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] != '\0' && ft_isdigit(nptr[i]))
	{
		number = number * 10 + (nptr[i] - '0');
		i++;
	}
	return (number * (sign));
}