

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	*ptr_s;

	i = 0;
	ptr_s = (char *)s;
	len = ft_strlen(ptr_s);
	while (i < len)
	{
		if (ptr_s[i] == (char)c)
		{
			return (&ptr_s[i]);
		}
		i++;
	}
	if (ptr_s[i] == (char)c)
		return (&ptr_s[i]);
	else
		return (NULL);
}
