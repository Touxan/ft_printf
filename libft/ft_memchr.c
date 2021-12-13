

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pt_s;

	pt_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (pt_s[i] == (unsigned char)c)
		{
			return (&pt_s[i]);
		}
		i++;
	}
	return (NULL);
}
