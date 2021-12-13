
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;
	size_t			i;

	i = 0;
	p = (unsigned char *)s1;
	q = (unsigned char *)s2;
	 if ((unsigned char *)s1 == (unsigned char *)s2)
		return (0);
	while (i < n)
	{
		if (p[i] != q[i])
		{
			return (p[i] - q[i]);
		}
		else
			i++;
	}
	return (0);
}
