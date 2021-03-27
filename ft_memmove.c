/*
** The memmove() function copies n bytes from memory area src to
** memory area dest.  The memory areas may overlap: copying takes
** place as though the bytes in src are first copied into a
** temporary array that does not overlap src or dest, and the bytes
** are then copied from the temporary array to dest.
*/

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	void *ret;

	if (!destination && !source)
		return (0);
	ret = destination;
	if (source < destination)
	{
		source += n;
		destination += n;
		while (n--)
		{
			*(char*)--destination = *(char*)--source;
		}
	}
	else
		while (n--)
			*(char*)destination++ = *(char*)source++;
	return (ret);
}
