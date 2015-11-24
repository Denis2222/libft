#include <libft.h>
#include <string.h>

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


	ret = ft_strlcat(buf, "abcd", 2);
	ret2 = strlcat(buf2, "a", 2);

	ft_putstr(buf);
	ft_putnbr(ret);

	ft_putstr(buf2);
	ft_putnbr(ret2);
}
