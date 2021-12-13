#include "../inc/ft_printf.h"

//FOnction who print the conv u and convert it 
// in the good format
int	ft_conv_u(va_list disp, int *printed, int *i)
{
	int		ret;
	unsigned int	number;
	char	*num;

	ret = 0;
	number = va_arg(disp, unsigned int);
	num = ft_unsigned_itoa(number);
	if (num == NULL)
		return (-1);
	*printed += ft_strlen(num);
	ft_putstr_fd(num, 1);
	free(num);
	(*i)++;
	return (ret);
}

//fOnction who print the conv d and i and convert 
//it in the good format of return  
int	ft_conv_di(va_list disp, int *printed, int *i)
{
	int	number;
	int	ret;
	char	*num;
	
	ret = 0;
	number = va_arg(disp, int);
	num = ft_itoa(number);
	if (num == NULL)
		return(-1);
	*printed += ft_strlen(num);
	ft_putstr_fd(num, 1);
	free(num);
	(*i)++;
	return (ret);
}
