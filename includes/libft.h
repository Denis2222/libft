#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>//malloc

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	ft_putnbr_base(int nb, char *base);

void	ft_swap(int *a, int *b);

int		ft_atoi(const char *str);
int		ft_atoi_base(char *str, char *base);

int		ft_strlen(char *str);

int		ft_strcmp(char *s1, const char *s2);
int		ft_strncmp(char *s1, const char *s2, size_t n);

int		ft_isdigit(char c);
int		ft_isalpha(char c);
int		ft_isalnum(char c);
int		ft_isprint(char c);

int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);

char	*ft_strrev(char *str);
char	*ft_strstr(char *str, const char *to_find);

char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);

char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);

char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t nb);
size_t	ft_strlcat(char *dest, const char *src, size_t nb);

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_concat_params(int argc, char **argv);
char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
