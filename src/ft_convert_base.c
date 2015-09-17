#include <libft.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nb;

	nb = ft_atoi_base(nbr, base_from);
	ft_putnbr_base(nb, base_to);
	return (nbr);	
}
