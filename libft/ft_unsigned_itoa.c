#include "libft.h"
//Fonction who convert in usigned int 
//same of int but can't be negative
//i free my malloc in the ft_int_conv  
char	*ft_unsigned_itoa(unsigned int n)
{
	char				*num_str;
	size_t				dgt;
	unsigned long int	numb;

	numb = n;
	dgt = ft_count_unsign(n);
	num_str = (char *)malloc(sizeof(char) * (dgt + 1));
	if (!num_str)
		return (NULL);
	num_str[dgt] = '\0';
	while (dgt--)
	{
		num_str[dgt] = numb % 10 + '0';
		numb /= 10;
	}
	return (num_str);
}
