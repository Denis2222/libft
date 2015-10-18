#include <libft.h>
#include <stdlib.h>

int	main(void)
{
	char str[] = "Hello World !";
	char *dest;

	dest = strchr(str, 'W');
	ft_putstr(dest);

	return (0);
}