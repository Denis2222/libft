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
	char *str2;

	str2 = ft_strrev(str);
	ft_putstr(str2);
}
