/*
** strchr: returns a pointer to the first occurrence
** of the character c in the string s.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int i;

	i = -1;
	while (++i < (int)ft_strlen(str) + 1)
	{
		if (*(str + i) == (char)ch)
			return ((char*)str + i);
	}
	return (0);
}
