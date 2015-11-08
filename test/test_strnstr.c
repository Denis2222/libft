#include <libft.h>
#include <string.h>

int	main(void)
{
	char *str = "Hello les gens";

	ft_putstr(strnstr(str, "les", 14));
	ft_putstr(ft_strnstr(str, "les", 14));
	return (0);
}