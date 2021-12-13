

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			i;
	size_t			j;
	size_t			sum_sizes;
	char			*new_s;

	if (!s1 || !s2)
		return (NULL);
	sum_sizes = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_s = malloc(sum_sizes);
	i = 0;
	j = 0;
	if (new_s == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_s[i + j] = s2[j];
		j++;
	}
	new_s[i + j] = '\0';
	return (new_s);
}
