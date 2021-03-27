/*
** lstclear: applyes clear function to the each element of the list
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *p;

	while (*lst)
	{
		p = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = p;
	}
	*lst = NULL;
}
