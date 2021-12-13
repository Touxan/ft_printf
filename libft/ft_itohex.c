//Base  hexa 

#include "libft.h"

static void	hexa_reverse(t_itexa *ptr)
{
	int	i;

	i = 0;
	while (i < ((*ptr).len / 2))
	{
		(*ptr).tmp = (*ptr).hexad[i];
		(*ptr).hexad[i] = (*ptr).hexad[(*ptr).len - i - 1];
		(*ptr).hexad[(*ptr).len - i - 1] = (*ptr).tmp;
		i++;
	}
}

//Permet de convertir en base 16 
static void	hexa_change(t_itexa *ptr, unsigned long int *num)
{
	while (*num > 0)
	{
		(*ptr).int_hex = *num % 16;
		if ((*ptr).int_hex < 10)
			(*ptr).hexad[(*ptr).len] = (*ptr).int_hex + 48;
		else
			(*ptr).hexad[(*ptr).len] = (*ptr).int_hex + (*ptr).conv_c;
		*num /= 16;
		(*ptr).len++;
	}
}

char	*ft_itexa(unsigned long int num, char to_conver)
{
	t_itexa	convert;

	convert.len = ft_count_unsign(num);
	convert.hexad = (char *)malloc((convert.len + 1) * sizeof(char));
	if (!convert.hexad)
		return (NULL);
	if (to_conver == 'X')
		convert.conv_c = 55;
	else
		convert.conv_c = 87;
	if (num == 0)
	{
		convert.hexad[0] = '0';
		convert.hexad[1] = '\0';
		return (convert.hexad);
	}
	convert.len = 0;
	hexa_change(&convert, &num);
	convert.hexad[convert.len] = '\0';
	convert.len = ft_strlen(convert.hexad);
	hexa_reverse(&convert);
	return (convert.hexad);
}
