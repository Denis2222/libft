char	*ft_strrepchr(char *str, char c, char n)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			str[i] = n;
		i++;
	}
	return (str);
}
