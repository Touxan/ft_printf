
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_string;
	size_t	i;
	size_t	s_leng;

	if (!s)
		return (NULL);
	s_leng = ft_strlen(s);
	if (s == NULL || s_leng <= start)
		return (ft_strdup(""));
	if (start + len < s_leng)
		new_string = (char *)malloc(sizeof(char) * (len + 1));
	else
		new_string = (char *)malloc(sizeof(char) * (s_leng - start + 1));
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		new_string[i] = s[start + i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
