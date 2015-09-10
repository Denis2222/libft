#include <stdlib.h>
#include <string.h>
#include <libft.h>

int	main(void)
{
/*
	ft_putstr("ft_putstr : OK");
	ft_putstr("\n=============================\n");
	ft_putstr("ft_putnbr(-154) : ");
	ft_putnbr(-154);
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

	ft_putstr("\n=============================\n");

	char *str[] = {"123","456","-154","g555","555g","-66tt","--99","--33gt"," 6"," -5","  -56k",'\0'};
	int x = 0;

	while (str[x] != '\0'){
		printf(" \"%s\" : (%d) = (%d) ", str[x], ft_atoi(str[x]), atoi(str[x]));
		x++;
	}
	ft_putstr("\n=============================\n");

	char dest[100];
	strcpy(dest, "####");

	strncpy(dest,    "=======", 2);
	printf("%s", dest);
	printf("\n\n");
	ft_strncpy(dest, "=======", 2);
	printf("%s", dest);
	ft_putstr("\n=============================\n");

	char src[100];
	char *dest;

	ft_strcpy(src, "Hello World Of Insane News");
	ft_putstr(src);
	printf("\n\n");

	dest = strstr(src, "or");
	if (dest)
		ft_putstr(dest);
	else
		ft_putstr("NULL");
	printf("\n->\n");
	if (ft_strstr(src, "or"))
		ft_putstr(ft_strstr(src, "or"));
	else
		ft_putstr("NULL");
	ft_putnbr(strncmp("abcde","abcdf", 4));
	printf("\n\n");
	ft_putnbr(ft_strncmp("abcde","abcdf", 4));
*/

	int var;
	var = 5;
	ft_putnbr(var);
	printf("\n\n");
	ft_putnbr(++var);
	printf("\n\n");
	ft_putnbr(var);
	
	return (0);
}
