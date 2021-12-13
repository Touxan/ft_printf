

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	tot_size;

	if (!s || fd < 0)
		return ;
	tot_size = ft_strlen(s);
	write(fd, s, tot_size);
}
