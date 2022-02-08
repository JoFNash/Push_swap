#include <stddef.h> 
#include <limits.h>

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n' \
	|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
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
		if (number > INT_MAX && sign == 1)
			return (-1);
		if ((-1) * number < INT_MIN && sign == -1)
			return (0);
		i++;
	}
	return (number * (sign));
}

int main(void)
{
	printf("%d", ft_atoi("-1025,91"));
	return (0);
}

// будем проверять каждое число в строке
// пока 
// проверка от isspace до isspace 