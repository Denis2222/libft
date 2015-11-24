#include <libft.h>
#include <string.h>

int	main(void)
{
	char *str = "Hello les gens";

	ft_putstr(strnstr(str, "les", 14));
	ft_putstr(ft_strnstr(str, "les", 14));


	char	buf[10];

	bzero(buf, 10);
	strcpy(buf, "un deux 9");

	if (ft_strnstr(buf, "9", 3) == ((void*)0))
		ft_putstr("ok");

	return (0);
}
