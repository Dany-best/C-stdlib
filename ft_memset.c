/*
** The memset function fills the first n bytes of the memory area
** pointed to by s with the constant byte c.
*/

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	void *ptr;

	ptr = destination;
	while (n--)
		*(char*)destination++ = (char)c;
	return (ptr);
}
