#include <libft.h>

int	main(void)
{
	char **str;

	str = ft_strsplit("***salut****!**", '*');
	ft_putstr(str[2]);
	return (0);
}
