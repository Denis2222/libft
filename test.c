#include <stdlib.h>
#include <libft.h>

int	main(void)
{
	ft_putstr("ft_putstr : OK");
	ft_putstr("\n=============================\n");
	ft_putstr("ft_putnbr(154) : ");
	ft_putnbr(154);
	ft_putstr("\n=============================\n");
	ft_putstr("ft_strlen(\"Hello World\") : ");
	ft_putnbr(ft_strlen("Hello World"));
	ft_putstr("\n=============================\n");
	int a;
	int b;
	a = 1;
	b = 2;
	ft_swap(&a,&b);
	ft_putstr("a = 1; b = 2; ft_swap(&a,&b) : a=");ft_putnbr(a);ft_putstr(" b=");ft_putnbr(b);
	ft_putstr("\n=============================\n");

	char str[] = "abc";
	char *t;

	t = (char *) malloc(sizeof(char) * 4);
	t[0] = 'a';
	t[1] = 'b';
	t[2] = 'c';
	t[3] = '\0';

	ft_putstr("only t:\n");
	ft_putstr(t);
	ft_putstr("\nft_strrev(t):\n");

	ft_putstr(ft_strrev(t));
	ft_putstr("\nft_strrev(str):\n");
	ft_putstr(ft_strrev(str));
}
