

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	leng;

	leng = ft_strlen(s);
	while (leng)
	{
		if (s[leng] == (unsigned char)c)
			return ((char *)&s[leng]);
		leng--;
	}
	if (s[leng] == (unsigned char)c)
		return ((char *)&s[leng]);
	return (NULL);
}
