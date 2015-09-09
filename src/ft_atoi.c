#include <libft.h>

int	ft_atoi(char *str)
{
	int nb;
	int	length;
	int	pos;
	int positive;

	pos = 0;
	nb = 0;
	length = ft_strlen(str);
	positive = 1;

	while(str[pos] == ' ')
	{
		pos++;
	}

	if(str[pos] == '-')
	{
		positive = -1;
		pos++;
	}
	while(pos < length)
	{
		if (!ft_isdigit(str[pos]))
		{
			return (nb * positive);
		}
		nb = (nb * 10) + (str[pos] - '0');		
		pos++;
	}
	return (nb * positive);
}
