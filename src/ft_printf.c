#include "../inc/ft_printf.h"

static void	ft_fail_conv(const char *conv, int *i, int *printed)
{
	ft_putchar_fd(conv[(*i)], 1);
	(*i)++;
	(*printed)++;
}


// FOnction d'analyse
static int	ft_parsing(const char *conv, int *i, va_list disp, int *printed)
{
	int	ret;

	ret = 0;
	if (conv[(*i)] == 'd' || conv[(*i)] == 'i')
		ret = ft_conv_di(disp, printed, i);
	else if (conv[(*i)] == 'u')
		ret = ft_conv_u(disp, printed, i);
	else if (conv[(*i)] == 'c')
		ft_char_conv(disp, printed, i);
	else if (conv[(*i)] == 'x' || conv[(*i)] == 'X'
		|| conv[(*i)] == 'p')
		ret = ft_hexa_conv(disp, conv[(*i)], printed, i);
	else if (conv[(*i)] == 's')
		ft_conv_str(disp, printed, i);
	else
	{
		ft_putchar_fd(conv[(*i)], 1);
		(*i)++;
		(*printed)++;
	}
	return (ret);
}

// Fonction printf i make a loop on \0 
// if i find a percent i use the parsing loop 
// else i use my fonction fail conv for print whats in " "
int	ft_printf(const char *conv, ...)
{
	va_list disp;
	int	ret;
	int	i;
	int	printed;

	va_start (disp, conv);
	if (!conv)
		return (-1);
	ret = 0;
	i = 0;
	printed = 0;

	while (conv[i] !='\0')
	{
		if (conv[i] == '%')
		{
			i++;
			ret = ft_parsing(conv, &i, disp, &printed);
			if (ret == -1)
				return (ret);
		}
	else
		ft_fail_conv(conv, &i, &printed);
	}
	va_end(disp);
	return (printed);
}
