#include <libft.h>

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	unsigned char	*sc;
// 	unsigned char	cc;
// 	size_t			p;

// 	sc = (unsigned char*)s;
// 	cc = (unsigned char)c;
// 	if (sc == NULL)
// 		return (NULL);
// 	p = 0;
// 	while (sc[p] != '\0' && p <= n)
// 	{
// 		if (sc[p] == cc)
// 			return (&sc[p]);
// 		p++;
// 	}
// 	return (NULL);
// }

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		--n;
		if (*((unsigned char *)s + n) == (unsigned char)c)
			return ((char *)s + n);
	}
	return (NULL);
}