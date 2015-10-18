#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *temp;

	temp = (unsigned char *)ft_strdup((char *)src);
	dest = ft_strncpy((char *)dest, (char *)temp, n);
	return (dest);
}