/*
** isalnum: test for an ASCII table character
*/

#include "libft.h"

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
