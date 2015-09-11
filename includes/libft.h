#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);
char	*ft_strrev(char *str);
int		ft_atoi(char *str);
int		ft_isdigit(char c);
int		ft_isalpha(char c);
int		ft_isalnum(char c);

int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);

