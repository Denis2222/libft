#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*sc;
	size_t	p;

	sc = (char*)s;

	p = 0;
	while (p < n)
	{
		if (sc[p] == (char)c)
			return (&sc[p]);
		p++;
	}
	return (NULL);
}