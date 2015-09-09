#include <libft.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int pos;
	pos = 0;

	while(src[pos] != '\0' && pos < n)
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';

	if (pos < n)
	{
		while (pos < n)
		{
			dest[pos] = '\0';
			pos++;
		}
	}
	return (dest);
}
