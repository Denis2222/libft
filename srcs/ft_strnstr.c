#include <libft.h>

char	*ft_strnstr(char *str, const char *to_find, size_t n)
{
	int		pos;
	int 	x;
	size_t	length;

	if (ft_strlen((char *)to_find) == 0)
		return (str);
	length = 0;
	pos = 0;
	x = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == to_find[x++])
		{
			length++;
			if (length >= n)
				return (&str[pos - x + 1]);
			if (to_find[x] == '\0')
				return (&str[pos - x + 1]);
		}
		else
		{
			x = 0;
			length = 0;
		}
		pos++;
	}
	return (0);
}
