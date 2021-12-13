#include "../inc/ft_printf.h"

// Fonction who print a string 
void	ft_conv_str(va_list disp, int *printed, int *i)
{
	char *arg;
	
	arg = va_arg(disp, char *);
	if (arg == NULL)
	{
		ft_putstr_fd("(null)", 1);
		*printed += 6;
	}
	else
	{
		ft_putstr_fd(arg, 1);
		*printed += ft_strlen(arg);
	}
	(*i)++;
}
