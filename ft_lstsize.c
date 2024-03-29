/*
** lstsize: return size of the list
*/

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int length;

	length = 0;
	while (lst)
	{
		lst = lst->next;
		length++;
	}
	return (length);
}
