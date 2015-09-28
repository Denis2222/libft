SRCS = ft_putchar.c \
	   ft_putstr.c \
	   ft_putnbr.c \
	   ft_strcmp.c \
	   ft_strlen.c \
	   ft_swap.c \
	   ft_strcat.c \
	   ft_strcmp.c \
	   ft_strcpy.c \
	   ft_strdup.c \
	   ft_strlen.c \
	   ft_strlowcase.c \
	   ft_strncat.c \
	   ft_strncmp.c \
	   ft_strncpy.c \
	   ft_strrev.c \
	   ft_strstr.c \
	   ft_strupcase.c \
	   ft_strcapitalize.c \
	   ft_str_is_printable.c \
	   ft_str_is_numeric.c \
	   ft_str_is_lowercase.c \
	   ft_str_is_alpha.c \
	   ft_split_whitespaces.c \
	   ft_split.c \
	   ft_range.c \
	   ft_putnbr_base.c \
	   ft_print_words_tables.c \
	   ft_param_to_tab.c \
	   ft_isprint.c \
	   ft_isdigit.c \
	   ft_isalpha.c \
	   ft_isalnum.c \
	   ft_create_elem.c \
	   ft_convert_base.c \
	   ft_concat_params.c \
	   ft_atoi.c \
	   ft_atoi_base.c \
	   ft_foreach.c \
	   ft_map.c

LIBA = libft.a
NAME = $(LIBA)
HPATH = -Iincludes
GCC_FLAGS = -Wall -Werror -Wextra -g
CC = gcc $(GCC_FLAGS)
SRCDIR = srcs
OBJDIR = objs
AR = ar -cvq
RM = rm -rf
# standart
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@echo 'Link [$@]<- $^ '
	@$(AR) $@ $^
	@ranlib $@
	
$(addprefix $(OBJDIR)/, %.o): $(addprefix $(SRCDIR)/, %.c)
	@echo 'Generate $@ : $^ '
	@$(CC) $(HPATH) -o $@ -c $^

