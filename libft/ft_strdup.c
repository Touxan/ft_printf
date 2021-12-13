
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	char	*p;
	int		i;

	i = 0;
	p = (char *)s;
	new_s = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (new_s == NULL)
		return (NULL);
	while (p[i] != '\0')
	{
		new_s[i] = p[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
