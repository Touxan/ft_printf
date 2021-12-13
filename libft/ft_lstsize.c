
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		n_elem;

	temp = lst;
	n_elem = 0;
	while (temp != NULL)
	{
		n_elem++;
		temp = temp->next;
	}
	return (n_elem);
}
