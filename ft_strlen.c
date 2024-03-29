/*
** strlen: return size of stirng
*/

#include "libft.h"

size_t		ft_strlen(const char *str)
{
	size_t length;

	length = 0;
	while (*str != '\0')
	{
		++str;
		++length;
	}
	return (length);
}
