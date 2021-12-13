
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	value;
	int	sign;
	int	i;

	i = 0;
	value = 0;
	sign = 1;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\v'
		|| nptr[i] == '\t' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		value = value * 10 + (nptr[i] - '0');
		i++;
	}
	return (value * sign);
}
