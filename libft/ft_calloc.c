

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*ptrmem;

	i = nmemb * size;
	ptrmem = malloc(i);
	if (!ptrmem)
		return (NULL);
	ft_bzero(ptrmem, i);
	return (ptrmem);
}
