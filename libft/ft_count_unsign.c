
#include "libft.h"

// I use this fonction for count my usigned int 
int	ft_count_unsign(unsigned long int number)
{
	int	is_digit;

	is_digit = 0;
	if (number == 0)
		is_digit++;
	while (number != 0)
	{
		number /= 10;
		is_digit++;
	}
	return (is_digit);
}
