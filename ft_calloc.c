/*
** calloc: allocates memory and assign bytes with zero value
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *mem;

	if (!(mem = (char*)malloc(nmemb * size)))
		return (NULL);
	ft_bzero(mem, nmemb * size);
	return (mem);
}
