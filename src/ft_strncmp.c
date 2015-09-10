#include <libft.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int x;

	x = 0;
	while(s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0' && x + 1 < n)
		x++;
	return (s1[x] - s2[x]);
}
