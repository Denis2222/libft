#include <libft.h>
#include <string.h>

int	test_memset()
{
	char *str;
	char *str2;

	str = ft_strdup("TATA");
	str2 = ft_strdup("TATA");

	if (strcmp(memset(str, 42, 2), ft_memset(str2, 42, 2)) == 0)
		return (1);
	return (0);
}

int	test_bzero()
{
	char *str;
	char *str2;

	str = ft_strdup("TATA");
	str2 = ft_strdup("TATA");
	bzero(str, 2);
	ft_bzero(str2, 2);
	if (strcmp(str, str2) == 0 && str[2] == str2[2])
		return (1);
	return (0);
}

int	test_memcpy()
{
	char *dest;
	char *src;
	char *dest2;
	char *src2;

	dest = ft_strdup("Welcome to 42");
	src = ft_strdup("#############");

	dest2 = ft_strdup("Welcome to 42");
	src2 = ft_strdup("#############");

	ft_memcpy(dest, src, 4);
	memcpy(dest2, src2, 4);

	if (strcmp(dest, dest2) == 0)
		return (1);
	return (0);
}

int	test_memccpy()
{
	char *dest;
	char *src;
	char *dest2;
	char *src2;

	dest = ft_strdup("Welcome to 42");
	src = ft_strdup("0123456789");
	dest2 = ft_strdup("Welcome to 42");
	src2 = ft_strdup("0123456789");

	ft_putstr(memccpy(dest, src, '2', 7));

	ft_putstr("moi\n");
	//ft_putstr(ft_memccpy(dest2, src2, '2', 7));
	//if (strcmp(memccpy(dest, src, '2', 7), ft_memccpy(dest2, src2, '2', 7)) == 0
	//	&& dest == dest2)
	//	return (1);

	return (0);
}

int main(int argc, char **argv)
{
	if (test_memset())
		ft_putstr("ft_memset : OK\n");
	if (test_bzero())
		ft_putstr("ft_bzero : OK\n");
	if (test_memcpy())
		ft_putstr("ft_memcpy : OK\n");
	if (test_memccpy())
		ft_putstr("ft_memccpy : OK\n");
	ft_putnbr(ft_atoi("\n\v\t\r\f -123"));

	return (0);
}