#include <libft.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
char	buf[10];
char	buf2[10];
int		ret;
int		ret2;

	ft_bzero(buf, 10);
	ft_strcpy(buf, "abc");

	ft_bzero(buf2, 10);
	ft_strcpy(buf2, "abc");


	ret = ft_strlcat(buf, "def", 15);
	ret2 = strlcat(buf2, "def", 15);

	ft_putstr(buf);
	ft_putnbr(ret);
	printf("\n");
	ft_putstr(buf2);
	ft_putnbr(ret2);
}
