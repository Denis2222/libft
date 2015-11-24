#include <libft.h>
#include <string.h>

int	main(void)
{
	char str[] = "Hello World !";
	char *dest;

	dest = strchr(str, (int)'W');
	ft_putstr(dest);

	dest =ft_strchr(str, (int)'W');
	ft_putstr(dest);
	
	return (0);
}