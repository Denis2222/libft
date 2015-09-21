#include <libft.h>

int	main(void)
{
	t_list	*elem;
	char str[10];

	elem = ft_create_elem("1er Wagon");
	ft_list_push_back(&elem, "2eme wagon");
	ft_list_push_back(&elem, "3eme wagon");
	ft_list_push_back(&elem, "4eme wagon");
	ft_list_push_back(&elem, "5eme wagon");
	ft_list_push_back(&elem, "6eme wagon");
	ft_print_list(elem);
	//ft_putstr("Toto create");
	return (0);
}
