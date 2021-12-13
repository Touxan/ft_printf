

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destin;
	char	*source;

	if (!dest && !src)
		return (NULL);
	destin = (char *)dest;
	source = (char *)src;
	i = 0;
	while (i < n)
	{
		destin[i] = source[i];
		i++;
	}
	return (dest);
}
