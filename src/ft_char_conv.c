#include "../inc/ft_printf.h"

// conv char print only a characrctere
void	ft_char_conv(va_list disp, int *printed, int *i)
{
	unsigned char	arg;
	
	arg = va_arg(disp, int);
	ft_putchar_fd(arg, 1);
	(*i)++;
	(*printed)++;
}
