#include <libft.h>

int		ft_split_count_words(char *str, char *charset)
{
	int	c;
	int word;
	int lword;

	c = 0;
	word = 0;
	lword = 0;
	while (str[c] != '\0')
	{
		if(ft_strncmp(&str[c], charset, ft_strlen(charset)) == 0)
		{
			c += ft_strlen(charset);
			lword = 0;
		}
		else
		{
			if(!lword)
				word++;
			lword++;
			c++;
		}
	}
	return (word);	
}

char	*ft_split_get_word(char *str, char *charset, int nword)
{
	int	c;
	int	word;
	int lword;
	char *strword;

	c = 0;
	word = 0;
	lword = 0;
	while (str[c] != '\0')
	{
		if(ft_strncmp(&str[c], charset, ft_strlen(charset)) == 0)
		{
			c += ft_strlen(charset);
			lword = 0;
		}
		else
		{
			if(!lword)
				word++;
			lword++;
			c++;
		}
		if ((ft_strncmp(&str[c], charset, ft_strlen(charset)) == 0) || str[c] == '\0' )
			if (word == nword)
			{
				strword = malloc(sizeof(char *) * (lword + 1));
				return (ft_strncpy(strword, &str[c-(lword)], lword));
			}
	}
	return (str);
}

char **ft_split(char *str, char *charset)
{
	char **tab;
	int	nbword;
	int i;

	nbword = ft_split_count_words(str, charset);
	tab = malloc(sizeof(char *) * (nbword + 1));
	i = 0;
	while (i < nbword)
	{
		tab[i] = ft_strdup(ft_split_get_word(str, charset, i + 1));
		i++;
	}
	tab[i] = malloc(sizeof(char) * 1);
	tab[i][0] = '\0';
	return (tab);
}
