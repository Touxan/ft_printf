

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	size_t	i;
	size_t	tot_size;

	i = 0;
	if (!s)
		return (NULL);
	tot_size = ft_strlen(s) + 1;
	new_s = (char *)malloc(sizeof(char) * tot_size);
	if (!new_s)
		return (NULL);
	while (s[i] != '\0')
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
