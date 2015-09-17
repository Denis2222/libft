#include <libft.h>

void	ft_split(char *str, char *charset)
{

	int	c;
	int	a;
	int nbcharset;
	int	new;
	int words;

	a = 0;
	c = 0;
	new = 0;
	nbcharset = 0;
	while (str[c] != '\0')
	{
		if (str[c] == charset[a])
		{
			a++;
			if (charset[a] == '\0')
			{
				new = 0;
				nbcharset++;
				a = 0;
			}
		}
		else if (str[c] == charset[0])
			a = 1;
		else
		{
			a = 0;
			if (!new)
			{
				new++;
				words++;
			}
		}
		c++;
	}

	printf("nbcharset:%d word:%d", nbcharset, words);
}
