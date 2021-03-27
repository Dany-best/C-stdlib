/*
** isalnum: test for an alphanumeric character
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
