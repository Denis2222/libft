#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen((char *)s);

	while (s[l] != (char)c && l >= 0 )
		l--;
	if (s[l] == (char)c)
		return ((char *)&s[l]);
	return (NULL);
}