#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *str;

	str = (unsigned char *)s;
	while (n--)
	{
		*str = (unsigned char)c;
		if (n)
			str++;
	}
	return (s);
}